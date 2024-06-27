/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:29:19 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/27 17:47:18 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"
#include <stdio.h>

void	check_and_parse(int argc, char **argv, int *a, int *b)
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

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	char	*line;

	if (argc < 2 || !argv[1])
		return (0);
	a = ft_calloc(argc - 1, sizeof(int));
	b = ft_calloc(argc - 1, sizeof(int));
	args_check_parse(argc, argv, a, b);
	line = get_next_line(0);
	while(line)
	{
		printf("checker: %s", line);
		free(line);
		line = get_next_line(0);
	}
}
