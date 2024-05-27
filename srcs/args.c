/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:05:16 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/27 18:36:00 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	max_min_check(char *s)
{
	long int res;
	int sign;

	res = 0;
	sign = 1;
	if (*s == 45 || *s == 43)
	{
		if (*s == 45)
			sign = -sign;
		s++;
	}
	while ((48 <= *s) && (*s <= 57))
	{
		res = (res * 10) + (*s - 48);
		s++;
	}
	if (res * sign > 2147483647 || res * sign < -2147483648)
		return (0);
	return (1);
}

int	digit_check(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!max_min_check(argv[i]) || !ft_isdigit(argv[i][j]))
				return (2);
			j++;
		}
		i++;
	}
	return (1);
}

int	dupl_check(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i++ < argc - 1)
	{
		j = 1;
		while (i + j < argc - 1)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[i + j]))
				return (2);
			j++;
		}
	}
	return (1);
}

int	ord_check(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (i + j++ < argc - 1)
		{
			if (ft_atoi(argv[i]) > ft_atoi(argv[i + j]))
				return (1);
		}
	}
	return (0);
}

void	args_check_parse(int argc, char **argv, int *a, int *b)
{
	int i;

	i = 0;
	if (digit_check(argc, argv) == 2 || dupl_check(argc, argv) == 2)
		free_err_check(a, b, 2);
	if (!ord_check(argc, argv))
		free_err_check(a, b, 0);
	while (i++ < argc - 1)
		a[i - 1] = ft_atoi(argv[i]);
}
