/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_s_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:29:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/26 21:31:51 by emohamed         ###   ########.fr       */
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
	write(1, "sa\n", 3);
}
void sb(t_stack *stack)
{
	int i = 0;
	if (!(stack->size > 1))
		return;
	i = stack->dclone[0];
	stack->dclone[0] = stack->dclone[1];
	stack->dclone[1] = i;
	write(1, "sb\n", 3);
}
void ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	write(1, "ss\n", 3);

}
