/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_rr_instruction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:26:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/21 16:33:38 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_stack *stack)
{
	int i = stack->size;
	int tmp;

	if (stack->size > 1)
	{
		tmp = stack->data[stack->size - 1];
		while (i > 0)
		{
			stack->data[i] = stack->data[i - 1];
			i--;
		}
		stack->data[0] = tmp;
		write(2, "rra\n", 3);
	}
}
void rrb(t_stack *stack)
{
	int i = stack->dsize;
	int tmp;

	if (stack->dsize > 1)
	{
		tmp = stack->dclone[stack->dsize - 1];
		while (i > 0)
		{
			stack->dclone[i] = stack->dclone[i - 1];
			i--;
		}
		stack->dclone[0] = tmp;
		write(2, "rrb\n", 3);
	}
}
void rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
	write(2, "rrr\n", 3);

}
