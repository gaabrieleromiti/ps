/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:29:19 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/03 16:15:03 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	get_apply(char *line, t_stack a, t_stack b)
{
	if (ft_strlen(line) == 3 && !ft_strncmp(line, "sa", 2))
		sa(a.stack);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "sb", 2))
		sb(b.stack);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "ss", 2))
		ss(a.stack, b.stack);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "ra", 2))
		ra(a.stack, a.stack_n);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "rb", 2))
		rb(b.stack, b.stack_n);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "rr", 2))
		rr(a.stack, b.stack, a.stack_n, b.stack_n);
	else if (ft_strlen(line) == 4 && !ft_strncmp(line, "rra", 3))
		rra(a.stack, a.stack_n);
	else if (ft_strlen(line) == 4 && !ft_strncmp(line, "rrb", 3))
		rrb(b.stack, b.stack_n);
	else if (ft_strlen(line) == 4 && !ft_strncmp(line, "rrr", 3))
		rrr(a.stack, b.stack, a.stack_n, b.stack_n);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "pa", 2))
		pa(a.stack, b.stack, a.stack_n, b.stack_n);
	else if (ft_strlen(line) == 3 && !ft_strncmp(line, "pb", 2))
		pb(a.stack, b.stack, a.stack_n, b.stack_n);
	else
		free_ok_ko(a, b, line, 3);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	*line;

	if (argc < 2 || !argv[1])
		return (0);
	a.stack = ft_calloc(argc - 1, sizeof(int));
	a.stack_n = ft_calloc(1, sizeof(int));
	b.stack = ft_calloc(argc - 1, sizeof(int));
	b.stack_n = ft_calloc(1, sizeof(int));
	*(a.stack_n) = argc - 1;
	*(b.stack_n) = 0;
	check_and_parse(argc, argv, a.stack, b.stack);
	line = get_next_line(0);
	while (line)
	{
		get_apply(line, a, b);
		free(line);
		line = get_next_line(0);
	}
	check_and_exit(a, b, line);
}
