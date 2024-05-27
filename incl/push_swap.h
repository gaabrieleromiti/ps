/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:28:00 by gromiti           #+#    #+#             */
/*   Updated: 2024/05/27 17:10:18 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // REMOVE

# include "../libft/libft.h"

int		max_min_check(char *s);
int		dupl_check(int argc, char **argv);
int		ord_check(int argc, char **argv);
//void args_parse();
void	args_check_parse(int argc, char **argv, int *a, int *b);

void	free_err_check(int *a, int *b, int err);

#endif
