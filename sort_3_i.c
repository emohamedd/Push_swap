/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:57:21 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/21 17:17:59 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_stack *stack)
{
	if ((stack->data[0] > stack->data[1]) && (stack->data[1] > stack->data[2]))
	{
		sa(stack);
		rra(stack);
	}
	else if ((stack->data[0] < stack->data[1]) && (stack->data[1] > stack->data[2]) && (stack->data[0] > stack->data[2]))
		rra(stack);
	else if ((stack->data[0] > stack->data[1]) && (stack->data[1] < stack->data[2]))
		ra(stack);
	else if ((stack->data[0] > stack->data[1]) && (stack->data[1] < stack->data[2]))
		sa(stack);
	else if ((stack->data[0] < stack->data[1]) && (stack->data[1] > stack->data[2]))
	{
		rra(stack);
		sa(stack);
	}
}