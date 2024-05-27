/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:09:37 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/27 18:18:30 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	slide_down(int *stack, int *elem)
{
	int	i;

	i = *elem + 1;
	while (i-- > 0)
		stack[i] = stack[i - 1];
}

void	slide_up(int *stack, int *elem)
{
	int	i;

	i = -1;
	while (i++ < *elem)
		stack[i] = stack[i + 1];
	stack[i] = 0;
}

void	pa(int *a, int *b, int *a_elem, int *b_elem)
{
	if (*b_elem > 0)
	{
		slide_down(a, a_elem);
		a[0] = b[0];
		b[0] = 0;
		*a_elem++;
		*b_elem--;
		slide_up(b, b_elem);
		write(1, "pa\n", 3);
	}
}

void	pb(int *a, int *b, int *a_elem, int *b_elem)
{
	if (*a_elem > 0)
	{
		slide_down(b, b_elem);
		b[0] = a[0];
		a[0] = 0;
		*b_elem++;
		*a_elem--;
		slide_up(a, a_elem);
		write(1, "pb\n", 3);
	}
}
