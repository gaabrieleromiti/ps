/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:06:29 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/27 17:35:27 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	free_err_check(int *a, int *b, int err)
{
	if (err == 0)
	{
		free(a);
		free(b);
		exit(0);
	}
	if (err == 2)
	{
		free(a);
		free(b);
		write(2, "Error\n", 6);
		exit(1);
	}
}
