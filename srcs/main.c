/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:56:31 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/20 11:22:04 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	a_n;
	int	b_n;

	if (argc < 2)
		exit (0);
	a = ft_calloc(argc - 1, sizeof(int));
	a_n = argc - 1;
	if (a_n > 3)
	{
		b = ft_calloc(argc - 1, sizeof(int));
		b_n = 0;
	}
	args_check_parse(argc, argv, a, b);
	sort(a, b, &a_n, &b_n);


	// pb(a, b, &a_n, &b_n);
	// int	i = -1;

	// while(i++ < argc - 2)
	// 	printf("%d\n", a[i]);

	// i = -1;

	// while (i++ < argc - 2)
	// 	printf("%d\n", b[i]);

	// printf ("a_n = %d\n", a_n);
	// printf ("b_n = %d\n", b_n);
}

