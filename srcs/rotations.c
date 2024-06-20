/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:38:57 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/20 12:25:32 by gromiti          ###   ########.fr       */
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
		buff[0] = index(a[i], a, a_n) + spot(a[i], b, b_n); // r r
		buff[1] = *a_n - index(a[0], a, a_n) + spot(a[0], b, b_n); // rr r
		buff[2] = *a_n - index(a[0], a, a_n) + *b_n - spot(a[0], b, b_n); // rr rr
		buff[3] = index(a[0], a, a_n) + *b_n - spot(a[0], b, b_n); // r rr
		check_cheapest(buff, cheapest, i);
	}
	free(buff);
	return (cheapest);
}

void	apply_cheapest(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheapest;

	cheapest = get_cheapest(a, a_n, b, b_n);

}
