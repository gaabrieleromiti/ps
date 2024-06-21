/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_till_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:48:43 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/21 12:35:57 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	biggest(int *s, int *s_n)
{
	int	i;
	int	res;

	i = 0;
	res = s[0];
	while (i++ < *s_n)
	{
		if (s[i] > res)
			res = s[i];
	}
	return (res);
}

int	smallest(int *s, int *s_n)
{
	int	i;
	int	res;

	i = 0;
	res = s[0];
	while (i++ < *s_n)
	{
		if (s[i] < res)
			res = s[i];
	}
	return (res);
}

int	get_ind(int n, int *s, int *s_n)
{
	int	i;

	i = -1;
	while (i++ < *s_n)
	{
		if (s[i] == n)
			return (i);
	}
	return (i);
}

int	spot(int n, int *s, int *s_n)
{
	int	i;

	i = -1;
	if (n > biggest(s, s_n) || n < smallest(s, s_n))
		return (get_ind(biggest(s, s_n), s, s_n));
	while (i++ < *s_n)
	{
		if ((i == *s_n - 1) && (n > s[i] && n < s[0]))
			return (0);
		else if (n < s[i] && n > s[i + 1])
			return (i + 1);
	}
	return (i);
}

void	sort_till_3(int *a, int *b, int *a_n, int *b_n)
{
	pb(a, b, a_n, b_n);
	pb(a, b, a_n, b_n);
	if (b[0] < b[1])
		sb(b);
	while (*a_n > 3)
		apply_cheap(a, a_n, b, b_n);
}
