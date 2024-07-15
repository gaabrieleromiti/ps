/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:05:01 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/15 18:05:58 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	print_sa(int *a)
{
	sa(a);
	write(1, "sa\n", 3);
}

void	print_sb(int *b)
{
	sb(b);
	write(1, "sb\n", 3);
}

void	print_ss(int *a, int *b)
{
	ss(a, b);
	write(1, "ss\n", 3);
}
