/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_r_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:26:37 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/26 21:32:20 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *stack)
{
	int i = 0;
	int tmp;
	if (stack->size > 1)
	{
		tmp = stack->data[0];
		while (i < stack->size)
		{
			stack->data[i] = stack->data[i + 1];
			i++;
		}
		stack->data[stack->size - 1] = tmp;
		write(1, "ra\n", 3);
	}
}
void rb(t_stack *stack)
{
	int i = 0;
	int tmp;
	if (stack->dsize > 1)
	{
		tmp = stack->dclone[0];
		while (i < stack->dsize)
		{
			stack->dclone[i] = stack->dclone[i + 1];
			i++;
		}
		stack->dclone[stack->dsize - 1] = tmp;
		write(1, "rb\n", 3);
	}
}
void rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
	write(1, "rr\n", 3);

}