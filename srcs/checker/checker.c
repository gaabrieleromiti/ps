/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:29:19 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/28 16:39:24 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"
#include <stdio.h>

void	check_and_parse(int argc, char **argv, int *a, int *b)
{
	int	i;

	i = 0;
	if (digit_check(argc, argv) == 2 || dupl_check(argc, argv) == 2)
		free_err_check(a, b, 2);
	if (!ord_check(argc, argv))
		free_err_check(a, b, 0);
	while (i++ < argc - 1)
		a[i - 1] = ft_atoi(argv[i]);
}

void	get_apply(int *a, int *a_n, int *b, int *b_n)
{
	char	*line;

	while ((line = get_next_line(0)) != NULL)
	{
		if (!ft_strncmp(line, "sa", 2))
			sa(a);
		else if (!ft_strncmp(line, "sb", 2))
			sb(b);
		else if (!ft_strncmp(line, "ss", 2))
			ss(a, b);
		else if (!ft_strncmp(line, "ra", 2))
			ra(a, a_n);
		else if (!ft_strncmp(line, "rb", 2))
			rb(b, b_n);
		else if (!ft_strncmp(line, "rr", 2))
			rr(a, b, a_n, b_n);
		else if (!ft_strncmp(line, "rra", 3))
			rra(a, a_n);
		else if (!ft_strncmp(line, "rrb", 3))
			rrb(b, b_n);
		else if (!ft_strncmp(line, "rrr", 3))
			rrr(a, b, a_n, b_n);
		free(line);
	}
}

int	main(int argc, char **argv)
{
	int	*a;
	int	a_n;
	int	*b;
	int	b_n;

	if (argc < 2 || !argv[1])
		return (0);
	a = ft_calloc(argc - 1, sizeof(int));
	a_n = argc - 1;
	b = ft_calloc(argc - 1, sizeof(int));
	b_n = 0;
	args_check_parse(argc, argv, a, b);
	get_apply(a, &a_n, b, &b_n);
}
