/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:40:57 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/15 18:08:41 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	print_pa(int *a, int *b, int *a_n, int *b_n)
{
	pa(a, b, a_n, b_n);
	write(1, "pa\n", 3);
}

void	print_pb(int *a, int *b, int *a_n, int *b_n)
{
	pb(a, b, a_n, b_n);
	write(1, "pb\n", 3);
}
