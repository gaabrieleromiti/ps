/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:38:57 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/21 10:51:24 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
// cheapest[0] == tot_moves; cheapest[1] == element; cheapest[2] == move_code;
void	check_cheapest(int *tot, int *cheapest, int n)
{
	int	mvoe_code;

	mvoe_code = -1;
	while (mvoe_code++ < 4)
	{
		if (cheapest[0] > tot[mvoe_code])
		{
			cheapest[0] = tot[mvoe_code];
			cheapest[1] = n;
			cheapest[2] = mvoe_code;
		}
	}
}

int	*get_cheapest(int *a, int *a_n, int *b, int *b_n)
{
	int	i;
	int	*tot;
	int	*cheapest;

	i = -1;
	tot = ft_calloc(4, sizeof(int));
	cheapest = ft_calloc(3, sizeof(int));
	while (i++ < *a_n)
	{
		tot[0] = get_r_r(index(a[i], a, a_n), spot(a[i], b, b_n));
		tot[1] = get_rr_r(a_n, index(a[i], a, a_n), spot(a[i], b, b_n));
		tot[2] = get_rr_rr(a_n, b_n, index(a[i], a, a_n), spot(a[i], b, b_n));
		tot[3] = get_r_rr(b_n, index(a[i], a, a_n), spot(a[i], b, b_n));
		check_cheapest(tot, cheapest, a[i]);
	}
	free(tot);
	return (cheapest);
}

void	apply_cheapest(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheapest;

	cheapest = get_cheapest(a, a_n, b, b_n);
	if (cheapest[2] == 0)
		apply_r_r(a, a_n, b, b_n);
	else if (cheapest[2] == 1)
		apply_rr_r(a, a_n, b, b_n);
	else if (cheapest[2] == 2)
		apply_rr_rr(a, a_n, b, b_n);
	else if (cheapest[2] == 3)
		apply_r_rr(a, a_n, b, b_n);
	free(cheapest);
}
