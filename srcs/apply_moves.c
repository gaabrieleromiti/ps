/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:29:36 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/21 11:04:28 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	apply_r_r(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheapest;
	int	ind;
	int	sp;

	cheapest = get_cheapest(a, a_n, b, b_n);
	ind = index(cheapest[1], a, a_n);
	sp = spot(cheapest[1], b, b_n);
	if (ind > sp)
	{
		while (sp-- >= 0)
			rr(a, b, a_n, b_n);
		while (ind-- >= 0)
			ra(a, a_n);
	}
	else
	{
		while (ind-- >= 0)
			rr(a, b, a_n, b_n);
		while (sp-- >= 0)
			rb(b, b_n);
	}
	pb(a, b, a_n, b_n);
	free(cheapest);
}
