/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:29:36 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/15 18:13:51 by gromiti          ###   ########.fr       */
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
		print_rr(a, b, a_n, b_n);
	while (a[0] != cheap[1])
		print_ra(a, a_n);
	while (spot(cheap[1], b, b_n) > 0)
		print_rb(b, b_n);
	print_pb(a, b, a_n, b_n);
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
		print_rra(a, a_n);
	while (spot(cheap[1], b, b_n) != 0)
		print_rb(b, b_n);
	print_pb(a, b, a_n, b_n);
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
		print_rrr(a, b, a_n, b_n);
	while (a[0] != cheap[1])
		print_rra(a, a_n);
	while (spot(cheap[1], b, b_n) > 0)
		print_rrb(b, b_n);
	print_pb(a, b, a_n, b_n);
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
		print_ra(a, a_n);
	while (spot(cheap[1], b, b_n) != 0)
		print_rrb(b, b_n);
	print_pb(a, b, a_n, b_n);
	free(cheap);
}
