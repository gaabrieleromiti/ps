/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:34:41 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/09 17:42:11 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	sort_2(int *a, int *b)
{
	if (a[0] > a[1])
		sa(a);
	free_err_check(a, b, 0);
}

void	sort_3(int *a, int *a_n, int *b, int *b_n)
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
	if (*b_n == 0)
		free_err_check(a, b, 0);
}

void	sort_4(int *a, int *a_n, int *b, int *b_n)
{
	while (ind(smallest(a, a_n), a, a_n) != 0)
	{
		if (ind(smallest(a, a_n), a, a_n) <= *a_n / 2)
			ra(a, a_n);
		else
			rra(a, a_n);
	}
	pb(a, b, a_n, b_n);
	sort_3(a, a_n, b, b_n);
	pa(a, b, a_n, b_n);
}

void	sort_5(int *a, int *a_n, int *b, int *b_n)
{
	while (*a_n > 3)
	{
		while (ind(smallest(a, a_n), a, a_n) != 0)
		{
			if (ind(smallest(a, a_n), a, a_n) <= *a_n / 2)
				ra(a, a_n);
			else
				rra(a, a_n);
		}
		pb(a, b, a_n, b_n);
	}
	sort_3(a, a_n, b, b_n);
	while (*b_n > 0)
		pa(a, b, a_n, b_n);
}

void	sort(int *a, int *b, int *a_n, int *b_n)
{
	if (*a_n == 2)
		sort_2(a, b);
	else if (*a_n == 3)
		sort_3(a, a_n, b, b_n);
	else if (*a_n == 4)
		sort_4(a, a_n, b, b_n);
	else if (*a_n == 5)
		sort_5(a, a_n, b, b_n);
	else if (*a_n > 5)
		sort_till_3(a, b, a_n, b_n);
}
