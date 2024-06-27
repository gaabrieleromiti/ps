/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:19:50 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/27 16:31:21 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	rra(int *a, int *a_n)
{
	int	i;
	int	tmp;

	i = *a_n;
	tmp = a[i - 1];
	while (--i > 0)
		a[i] = a[i - 1];
	a[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(int *b, int *b_n)
{
	int	i;
	int	tmp;

	i = *b_n;
	tmp = b[i - 1];
	while (--i > 0)
		b[i] = b[i - 1];
	b[0] = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(int *a, int *b, int *a_n, int *b_n)
{
	int	i;
	int	tmp;

	i = *a_n;
	tmp = a[i - 1];
	while (--i > 0)
		a[i] = a[i - 1];
	a[0] = tmp;
	i = *b_n;
	tmp = b[i - 1];
	while (--i > 0)
		b[i] = b[i - 1];
	b[0] = tmp;
	write(1, "rrr\n", 4);
}
