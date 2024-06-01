/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:56:31 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/28 16:06:53 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	a_elem;
	int	b_elem;

	if (argc < 2)
		exit (0);
	a = ft_calloc(argc - 1, sizeof(int));
	a_elem = argc - 1;
	if (a_elem > 3)
	{
		b = ft_calloc(argc - 1, sizeof(int));
		b_elem = 0;
	}
	args_check_parse(argc, argv, a, b);
	sort(a, b, &a_elem, &b_elem);


	// pb(a, b, &a_elem, &b_elem);
	// int	i = -1;

	// while(i++ < argc - 2)
	// 	printf("%d\n", a[i]);

	// i = -1;

	// while (i++ < argc - 2)
	// 	printf("%d\n", b[i]);

	// printf ("a_elem = %d\n", a_elem);
	// printf ("b_elem = %d\n", b_elem);
}

