/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:09:37 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/27 17:35:47 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	slide_down(int *s, int *el)
{
	int	i;

	i = *el + 1;
	while (--i > 0)
		s[i] = s[i - 1];
}

void	slide_up(int *s, int *el)
{
	int	i;

	i = -1;
	while (++i < *el)
		s[i] = s[i + 1];
	s[i] = 0;
}

void	pa(int *a, int *b, int *a_n, int *b_n)
{
	if (*b_n > 0)
	{
		slide_down(a, a_n);
		a[0] = b[0];
		b[0] = 0;
		(*a_n)++;
		(*b_n)--;
		slide_up(b, b_n);
		write(1, "pa\n", 3);
	}
}

void	pb(int *a, int *b, int *a_n, int *b_n)
{
	if (*a_n > 0)
	{
		slide_down(b, b_n);
		b[0] = a[0];
		a[0] = 0;
		(*b_n)++;
		(*a_n)--;
		slide_up(a, a_n);
		write(1, "pb\n", 3);
	}
}
