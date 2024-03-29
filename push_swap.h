/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:36:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 06:36:45 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// -----Libs-----//
# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

// -----My Struct-----//
typedef struct s_stack
{
	int		*data;
	int		*dclone;
	int		*help_stack;
	int		size;
	int		dsize;
}			t_stack;

// -----My Rules-----//
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		pb(t_stack *stack);
void		pa(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);
// -----Sorting-----//
int			is_sorted(t_stack *stack);
void		sort_3(t_stack *stack);
void		sort_5(t_stack *stack);
void		sort_100(t_stack *stack);
void		sort_500(t_stack *stack);
void		bb_sort(t_stack *stack);
void		the_100_or_the_500(t_stack *stack);
// -----Check Arg-----//
long long	ft_atoi_up(char *str);
int			check_arg(t_stack *stack, char **av);
char		**linke(char **av);
void		check_param(char **av);
// -----Stack Play-----//
void		push_a_to_cpy(t_stack *stack);
void		push_from_bta(t_stack *stack);
void		push_to_b_stack(t_stack *stack, int start, int end);
void		pa_to_cpy(t_stack *stack);
// -----The Indexing-----//
int			max(t_stack *stack);
int			max_dclone(t_stack *stack);
int			min(t_stack *stack);
int			index_min(t_stack *stack, int min);
int			int_indx(t_stack *stack, int i);
int			int_indx_dclone(t_stack *stack, int i);
// -----Err handler-----//
void		err(void);
// -----leaks solver-----//
void		free_array(char **str);
void		free_stack(t_stack *stack);

#endif
