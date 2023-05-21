/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:29:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/21 14:27:12 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *stack)
{
	int i = 0;
	if (!(stack->size > 1))
		return;
	i = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = i; 
}
void sb(t_stack *stack)
{
	int i = 0;
	if (!(stack->size > 1))
		return;
	i = stack->dclone[0];
	stack->dclone[0] = stack->dclone[1];
	stack->dclone[1] = i; 
}
void pb(t_stack *stack)
{
	if (stack->dsize == 0)
		stack->dclone[0] = stack->data[0];
	// else (stack->dsize != 0)
	
	int i = 0;
	while (i < stack->size)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
    stack->size--;
	stack->dsize++;
	
}