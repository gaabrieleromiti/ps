/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:38:57 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/21 12:36:09 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	check_cheap(int *tot, int *cheap, int n)
{
	int	mvoe_code;

	mvoe_code = -1;
	while (mvoe_code++ < 4)
	{
		if (cheap[0] > tot[mvoe_code])
		{
			cheap[0] = tot[mvoe_code];
			cheap[1] = n;
			cheap[2] = mvoe_code;
		}
	}
}

int	*get_cheap(int *a, int *a_n, int *b, int *b_n)
{
	int	i;
	int	*tot;
	int	*cheap;

	i = -1;
	tot = ft_calloc(4, sizeof(int));
	cheap = ft_calloc(3, sizeof(int));
	while (i++ < *a_n)
	{
		tot[0] = get_r_r(get_ind(a[i], a, a_n), spot(a[i], b, b_n));
		tot[1] = get_rr_r(a_n, get_ind(a[i], a, a_n), spot(a[i], b, b_n));
		tot[2] = get_rr_rr(a_n, b_n, get_ind(a[i], a, a_n), spot(a[i], b, b_n));
		tot[3] = get_r_rr(b_n, get_ind(a[i], a, a_n), spot(a[i], b, b_n));
		check_cheap(tot, cheap, a[i]);
	}
	free(tot);
	return (cheap);
}

void	apply_cheap(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheap;

	cheap = get_cheap(a, a_n, b, b_n);
	if (cheap[2] == 0)
		apply_r_r(a, a_n, b, b_n);
	else if (cheap[2] == 1)
		apply_rr_r(a, a_n, b, b_n);
	else if (cheap[2] == 2)
		apply_rr_rr(a, a_n, b, b_n);
	else if (cheap[2] == 3)
		apply_r_rr(a, a_n, b, b_n);
	free(cheap);
}
