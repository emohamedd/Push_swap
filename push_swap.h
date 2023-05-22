/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:36:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/22 11:24:48 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "printf/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct s_stack {
  int *data;
  int *dclone;
  int size;
  int dsize;
}t_stack;

long long ft_atoi_up(char *str);
void err(void);
int check_arg(t_stack *stack, char **av);
char **linke(char **av);
void sa(t_stack *stack);
void sb(t_stack *stack);
void ss(t_stack *stack);
void pb(t_stack *stack);
void pa(t_stack *stack);
void ra(t_stack *stack);
void rb(t_stack *stack);
void rr(t_stack *stack);
void rra(t_stack *stack);
void rrb(t_stack *stack);
void rrr(t_stack *stack);
void sort_3(t_stack *stack);
int min(t_stack *stack);
int max(t_stack *stack);

#endif