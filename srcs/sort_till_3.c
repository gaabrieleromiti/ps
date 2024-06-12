/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_till_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:48:43 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/12 18:37:47 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	get_biggest(int *s, int *s_elem)
{
	int	i;
	int	res;

	i = 0;
	res = s[0];
	while (i++ < *s_elem)
	{
		if (s[i] > res)
			res = s[i];
	}
	return (res);
}

int	get_smallest(int *s, int *s_elem)
{
	int	i;
	int	res;

	i = 0;
	res = s[0];
	while (i++ < *s_elem)
	{
		if (s[i] < res)
			res = s[i];
	}
	return (res);
}

int get_index(int n, int *s, int *s_elem)
{
	int	i;

	i = -1;
	while (i++ < *s_elem)
	{
		if (s[i] == n)
			return (i);
	}
}

	t_cheapest get_cheapest(int *a, int *a_elem, int *b, int *b_elem)
{
	int	i;
	int	j;
	int	big;
	int	sma;

	i = 0;
	big = get_biggest(a, a_elem);
	sma = get_smallest(a, a_elem);
	while (i < *a_elem)
	{
		if (a[i] > big || a[i] < sma)
		{
			
		}
		j = 0;
	}

}

void	sort_till_3(int *a, int *b, int *a_elem, int *b_elem)
{
	pb(a, b, a_elem, b_elem);
	pb(a, b, a_elem, b_elem);
	if (b[0] < b[1])
		sb(b);

}
