/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:29:36 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/27 17:35:01 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	apply_r_r(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheap;

	cheap = get_cheap(a, a_n, b, b_n);
	if (cheap[2] != 0 || !cheap)
	{
		free(cheap);
		free_err_check(a, b, 2);
	}
	while (a[0] != cheap[1] && spot(cheap[1], b, b_n) > 0)
		rr(a, b, a_n, b_n);
	while (a[0] != cheap[1])
		ra(a, a_n);
	while (spot(cheap[1], b, b_n) > 0)
		rb(b, b_n);
	pb(a, b, a_n, b_n);
	free(cheap);
}

void	apply_rr_r(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheap;

	cheap = get_cheap(a, a_n, b, b_n);
	if (cheap[2] != 1 || !cheap)
	{
		free(cheap);
		free_err_check(a, b, 2);
	}
	while (a[0] != cheap[1])
		rra(a, a_n);
	while (spot(cheap[1], b, b_n) != 0)
		rb(b, b_n);
	pb(a, b, a_n, b_n);
	free(cheap);
}

void	apply_rr_rr(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheap;

	cheap = get_cheap(a, a_n, b, b_n);
	if (cheap[2] != 2 || !cheap)
	{
		free(cheap);
		free_err_check(a, b, 2);
	}
	while (a[0] != cheap[1] && spot(cheap[1], b, b_n) > 0)
		rrr(a, b, a_n, b_n);
	while (a[0] != cheap[1])
		rra(a, a_n);
	while (spot(cheap[1], b, b_n) > 0)
		rrb(b, b_n);
	pb(a, b, a_n, b_n);
	free(cheap);
}

void	apply_r_rr(int *a, int *a_n, int *b, int *b_n)
{
	int	*cheap;

	cheap = get_cheap(a, a_n, b, b_n);
	if (cheap[2] != 3 || !cheap)
	{
		free(cheap);
		free_err_check(a, b, 2);
	}
	while (a[0] != cheap[1])
		ra(a, a_n);
	while (spot(cheap[1], b, b_n) != 0)
		rrb(b, b_n);
	pb(a, b, a_n, b_n);
	free(cheap);
}
