/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:28:00 by gromiti           #+#    #+#             */
/*   Updated: 2024/06/21 21:40:29 by gromiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // REMOVE

# include "../libft/libft.h"

// apply_moves.c
void	apply_r_r(int *a, int *a_n, int *b, int *b_n);
void	apply_rr_r(int *a, int *a_n, int *b, int *b_n);
void	apply_rr_rr(int *a, int *a_n, int *b, int *b_n);
void	apply_r_rr(int *a, int *a_n, int *b, int *b_n);

// args.c
int		max_min_check(char *s);
int		dupl_check(int argc, char **argv);
int		dupl_check(int argc, char **argv);
int		ord_check(int argc, char **argv);
void	args_check_parse(int argc, char **argv, int *a, int *b);

// cheapest.c
void	check_cheap(int *buff, int *cheap, int ind);
int		*get_cheap(int *a, int *a_n, int *b, int *b_n);
void	apply_cheap(int *a, int *a_n, int *b, int *b_n);

// free.c
void	free_err_check(int *a, int *b, int err);

// get_moves.c
int		get_r_r(int index, int spot);
int		get_rr_r(int *a_n, int index, int spot);
int		get_rr_rr(int *a_n, int *b_n, int index, int spot);
int		get_r_rr(int *b_n, int index, int spot);

// push.c
void	slide_down(int *s, int *el);
void	slide_up(int *s, int *el);
void	pa(int *a, int *b, int *a_n, int *b_n);
void	pb(int *a, int *b, int *a_n, int *b_n);

// r_rotate.c
void	rra(int *a, int *a_n);
void	rrb(int *b, int *b_n);
void	rrr(int *a, int *b, int *a_n, int *b_n);

// rotate.c
void	ra(int *a, int *a_n);
void	rb(int *b, int *b_n);
void	rr(int *a, int *b, int *a_n, int *b_n);

// sort_till_3.c
int		biggest(int *s, int *s_n);
int		smallest(int *s, int *s_n);
int		get_ind(int n, int *s, int *s_n);
int		spot(int n, int *s, int *s_n);
int		spot_a(int n, int *a, int *a_n);
void	sort_till_3(int *a, int *b, int *a_n, int *b_n);

// sort.c
void	sort_2(int *a);
void	sort_3(int *a, int *a_n);
void	sort(int *a, int *b, int *a_n, int *b_n);

// swap.c
void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);

#endif
