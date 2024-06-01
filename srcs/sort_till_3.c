/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_till_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:48:43 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/28 16:50:02 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	sort_till_3(int *a, int *b, int *a_elem, int *b_elem)
{
	pb(a, b, a_elem, b_elem);
	pb(a, b, a_elem, b_elem);
	if (b[0] < b[1])
		sb(b);

}
