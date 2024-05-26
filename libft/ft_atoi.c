/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:43 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/26 16:13:44 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s, int *err)
{
	long int	res;
	int			sign;

	res = 0;
	sign = 1;
	while ((*s == 32) || ((9 <= *s) && (*s <= 13)))
		s++;
	if (*s == 45 || *s == 43)
	{
		if (*s == 45)
			sign = -sign;
		s++;
	}
	while ((48 <= *s) && (*s <= 57))
	{
		res = (res * 10) + (*s - 48);
		s++;
	}
	if (res * sign > 2147483647 || res * sign < -2147483648)
	{
		*err = 1;
		return (0);
	}
	return (res * sign);
}
