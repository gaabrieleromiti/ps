/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:56:31 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/27 18:50:46 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	a_elem;
	// int	b_elem;

	if (argc < 2)
		exit (0);
	a = ft_calloc(argc - 1, sizeof(int));
	b = ft_calloc(argc - 1, sizeof(int));
	a_elem = argc - 1;
	// b_elem = 0;
	args_check_parse(argc, argv, a, b);
	int	i = -1;

	while(i++ < argc - 2)
		printf("%d\n", a[i]);
}

