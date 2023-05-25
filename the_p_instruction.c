/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_p_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:17:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/25 19:01:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void pb(t_stack *stack)
{
	int i;
	stack->dsize++;
	i = stack->dsize;
	int tmp = stack->data[0];
	while(i)
	{
		stack->dclone[i] = stack->dclone[i - 1];
		i--;
	}
	stack->dclone[0] = tmp;
	i = 0;
	int s = stack->size;
	while (i < s)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
	stack->size--;
}

void pa(t_stack *stack)
{
	int i;
	i = stack->size;
	while(i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[0] = stack->dclone[0];
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