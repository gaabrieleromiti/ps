/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:34:41 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/24 17:27:03 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sort_2(int *a)
{
	if (a[0] > a[1])
		sa(a);
	free_err_check(a, NULL, 0);
}

void	sort_3(int *a, int *a_n)
{
	if (a[0] < a[1] && a[1] > a[2] && a[0] < a[2])
	{
		sa(a);
		ra(a, a_n);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2])
		sa(a);
	else if (a[0] < a[1] && a[1] > a[2] && a[0] > a[2])
		rra(a, a_n);
	else if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2])
		ra(a, a_n);
	else if (a[0] > a[1] && a[1] > a[2] && a[0] > a[2])
	{
		sa(a);
		rra(a, a_n);
	}
	free_err_check(a, NULL, 0);
}

void	sort(int *a, int *b, int *a_n, int *b_n)
{
	if (*a_n == 2)
		sort_2(a);
	else if (*a_n == 3)
		sort_3(a, a_n);
	else if (*a_n > 3)
		sort_till_3(a, b, a_n, b_n);
}
