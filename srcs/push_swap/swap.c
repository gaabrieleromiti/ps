/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:26:52 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/27 18:34:19 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sa(int *a)
{
	int	tmp;

	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *b)
{
	int	tmp;

	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(int *a, int *b)
{
	int	tmp;

	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "ss\n", 3);
}
