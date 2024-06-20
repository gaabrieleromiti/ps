/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:38:57 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/20 18:18:55 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	check_cheapest(int *buff, int *cheapest, int ind)
{
	int	i;

	i = -1;
	while (i++ < 4)
	{
		if (cheapest[0] > buff[i])
		{
			cheapest[0] = buff[i];
			cheapest[1] = ind;
			cheapest[2] = i;
		}
	}
}

int	*get_cheapest(int *a, int *a_n, int *b, int *b_n)
{
	int	i;
	int	buff[4];
	int	cheapest[3];

	i = -1;
	while (i++ < *a_n)
	{
		buff[0] = get_r_r(index(a[i], a, a_n), spot(a[i], b, b_n));
		buff[1] = get_rr_r(a_n, index(a[i], a, a_n), spot(a[i], b, b_n));
		buff[2] = get_rr_rr(a_n, b_n, index(a[i], a, a_n), spot(a[i], b, b_n));
		buff[3] = get_r_rr(b_n, index(a[i], a, a_n), spot(a[i], b, b_n));
		check_cheapest(buff, cheapest, i);
	}
	free(buff);
	return (cheapest);
}

void	apply_cheapest(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheapest;

	cheapest = get_cheapest(a, a_n, b, b_n);
	if (cheapest[2] == 0)

}
