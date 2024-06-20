/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:18:27 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/20 18:19:12 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	get_r_r(int index, int spot)
{
	if (index > spot)
		return (index);
	else
		return (spot);
}

int	get_rr_r(int *a_n, int index, int spot)
{
	return (*a_n - index + spot);
}

int	get_rr_rr(int *a_n, int *b_n, int index, int spot)
{
	if (*a_n - index >= *b_n - spot)
		return (*a_n - index);
	else
		return (*b_n - spot);
}

int	get_r_rr(int *b_n, int index, int spot)
{
	return (index + *b_n - spot);
}
