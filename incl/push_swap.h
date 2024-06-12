/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:28:00 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/12 17:45:12 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // REMOVE

# include "../libft/libft.h"

// cheapest_struct
typedef struct cheapest
{
	int	elem;
	int	ind;
	int	price;
}	t_cheapest;

// args.c
int		max_min_check(char *s);
int		dupl_check(int argc, char **argv);
int		dupl_check(int argc, char **argv);
int		ord_check(int argc, char **argv);
void	args_check_parse(int argc, char **argv, int *a, int *b);

// free.c
void	free_err_check(int *a, int *b, int err);

// push.c
void	slide_down(int *stack, int *elem);
void	slide_up(int *stack, int *elem);
void	pa(int *a, int *b, int *a_elem, int *b_elem);
void	pb(int *a, int *b, int *a_elem, int *b_elem);

// r_rotate.c
void	rra(int *a, int *a_elem);
void	rrb(int *b, int *b_elem);
void	rrr(int *a, int *b, int *a_elem, int *b_elem);

// rotate.c
void	ra(int *a, int *a_elem);
void	rb(int *b, int *b_elem);
void	rr(int *a, int *b, int *a_elem, int *b_elem);

// sort_till_3.c
int		get_biggest(int *s, int *s_elem);
int		get_smallest(int *s, int *s_elem);
int		get_index(int n, int *s, int *s_elem);
void	sort_till_3(int *a, int *b, int *a_elem, int *b_elem);

// sort.c
void	sort_2(int *a);
void	sort_3(int *a, int *a_elem);
void	sort(int *a, int *b, int *a_elem, int *b_elem);

// swap.c
void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);

#endif
