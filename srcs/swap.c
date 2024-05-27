/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:26:52 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/27 18:27:02 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sa(int *a, int *a_elem)
{
	int	tmp;

	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *b, int *b_elem)
{
	int	tmp;

	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	write(1, "sb\n", 3);
}

void	ss(int *a, int *b, int *a_elem, int *b_elem)
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
