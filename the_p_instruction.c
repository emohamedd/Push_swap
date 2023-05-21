/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_p_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:17:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/21 15:17:46 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void pb(t_stack *stack)
{
	int i;
	if (stack->dsize == 0)
		stack->dclone[0] = stack->data[0];
	if (stack->dsize != 0)
	{
		i = stack->dsize;
		while(i > 0)
		{
			stack->dclone[i] = stack->dclone[i - 1];
			i--;
		}
		stack->dclone[0] = stack->data[0];
	}
	i = 0;
	while (i < stack->size)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
    stack->size--;
	stack->dsize++;
	write(2, "pb\n", 3);
	
}
void pa(t_stack *stack)
{
	int i;
	if (stack->size == 0)
		stack->data[0] = stack->dclone[0];
	if (stack->size != 0)
	{
		i = stack->size;
		while(i > 0)
		{
			stack->data[i] = stack->data[i - 1];
			i--;
		}
		stack->data[0] = stack->dclone[0];
	}
	i = 0;
	while (i < stack->dsize)
	{
		stack->dclone[i] = stack->dclone[i + 1];
		i++;
	}
    stack->size++;
	stack->dsize--;
	write(2, "pa\n", 3);
}