/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:02:11 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/15 18:03:22 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void print_ra(int *a, int *a_n)
{
	ra(a, a_n);
	write(1, "ra\n", 3);
}

void print_rb(int *b, int *b_n)
{
	rb(b, b_n);
	write(1, "rb\n", 3);
}

void print_rr(int *a, int *b, int *a_n, int *b_n)
{
	rr(a, b, a_n, b_n);
	write(1, "rr\n", 3);
}
