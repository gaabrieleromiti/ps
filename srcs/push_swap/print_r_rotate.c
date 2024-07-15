/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_r_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:43:32 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/15 18:03:59 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	print_rra(int *a, int *a_n)
{
	rra(a, a_n);
	write(1, "rra\n", 4);
}

void	print_rrb(int *b, int *b_n)
{
	rrb(b, b_n);
	write(1, "rrb\n", 4);
}

void	print_rrr(int *a, int *b, int *a_n, int *b_n)
{
	rrr(a, b, a_n, b_n);
	write(1, "rrr\n", 4);
}
