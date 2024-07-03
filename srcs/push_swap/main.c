/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:56:31 by gromiti           #+#    #+#             */
/*   Updated: 2024/07/03 16:17:04 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	a_n;
	int	b_n;

	if (argc < 2)
		return (0);
	a = ft_calloc(argc - 1, sizeof(int));
	a_n = argc - 1;
	b = ft_calloc(argc - 1, sizeof(int));
	b_n = 0;
	args_check_parse(argc, argv, a, b);
	sort(a, b, &a_n, &b_n);
	free_err_check(a, b, 0);
	return (0);
}
