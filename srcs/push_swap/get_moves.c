/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:18:27 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/27 17:35:34 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	get_r_r(int ind, int sp)
{
	if (ind > sp)
		return (ind);
	else
		return (sp);
}

int	get_rr_r(int *a_n, int ind, int sp)
{
	return (*a_n - ind + sp);
}

int	get_rr_rr(int *a_n, int *b_n, int ind, int sp)
{
	if (*a_n - ind >= *b_n - sp)
		return (*a_n - ind);
	else
		return (*b_n - sp);
}

int	get_r_rr(int *b_n, int ind, int sp)
{
	return (ind + *b_n - sp);
}
