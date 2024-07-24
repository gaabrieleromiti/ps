/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:29:23 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/24 16:02:44 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	free_ok_ko(t_stack a, t_stack b, char *line, int err)
{
	if (a.stack)
		free(a.stack);
	if (b.stack)
		free(b.stack);
	if (a.stack_n)
		free(a.stack_n);
	if (b.stack_n)
		free(b.stack_n);
	if (line)
		free(line);
	if (err == 1)
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	if (err == 2)
	{
		write(1, "KO\n", 3);
		exit(1);
	}
	if (err == 3)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	check_and_parse(int argc, char **argv, int *a, int *b)
{
	int	i;

	i = 0;
	if (digit_check(argc, argv) == 2 || dupl_check(argc, argv) == 2)
		free_err_check(a, b, 2);
	if (!ord_check(argc, argv))
		free_err_check(a, b, 3);
	while (i++ < argc - 1)
		a[i - 1] = ft_atoi(argv[i]);
}

void	check_and_exit(t_stack a, t_stack b, char *line)
{
	if (b.stack_n[0] == 0 && is_sorted(a.stack, a.stack_n[0]))
		free_ok_ko(a, b, line, 1);
	else if (b.stack_n[0] != 0)
		free_ok_ko(a, b, line, 2);
	else if (!is_sorted(a.stack, a.stack_n[0]))
		free_ok_ko(a, b, line, 2);
}

int	is_sorted(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
