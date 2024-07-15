/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:24:53 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/15 17:44:28 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ra(int *a, int *a_n)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = a[0];
	while (i++ < *a_n - 2)
		a[i] = a[i + 1];
	a[i] = tmp;
}

void	rb(int *b, int *b_n)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = b[0];
	while (i++ < *b_n - 2)
		b[i] = b[i + 1];
	b[i] = tmp;
}

void	rr(int *a, int *b, int *a_n, int *b_n)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = a[0];
	while (i++ < *a_n - 2)
		a[i] = a[i + 1];
	a[i] = tmp;
	i = -1;
	tmp = b[0];
	while (i++ < *b_n - 2)
		b[i] = b[i + 1];
	b[i] = tmp;
}
