/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:57:21 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/27 16:10:09 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack)
{
	if (stack->data[0] == max(stack) && stack->data[2] == min(stack))
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->data[1] == max(stack) && stack->data[2] == min(stack))
		rra(stack);
	else if (stack->data[0] == max(stack) && stack->data[1] == min(stack))
		ra(stack);
	else if (stack->data[1] == min(stack) && stack->data[2] == max(stack))
		sa(stack);
	else if (stack->data[0] == min(stack) && stack->data[1] == max(stack))
	{
		rra(stack);
		sa(stack);
	}
	else
		return ;
}
