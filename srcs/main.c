/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:56:31 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/21 21:48:42 by gromiti          ###   ########.fr       */
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

	// int	*cheap;

	// cheap = get_cheap(a, &a_n, b, &b_n);
	// printf("cheap[0] = %d\n", cheap[0]);
	// printf("cheap[1] = %d\n", cheap[1]);
	// printf("cheap[2] = %d\n", cheap[2]);

	// int	i = -1;

	// while (i++ < argc - 2)
	// 	printf("%d		%d\n", a[i], b[i]);
	// exit(0);
	sort(a, b, &a_n, &b_n);

	int	i = -1;

	while(i++ < argc - 2)
		printf("%d		%d\n", a[i], b[i]);
	return (0);
	// free_err_check(a, b, 0);
	// i = -1;

	// while (i++ < argc - 2)
	// 	printf("%d\n", b[i]);

	// printf ("a_n = %d\n", a_n);
	// printf ("b_n = %d\n", b_n);
}

