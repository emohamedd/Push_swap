/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:37:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 21:17:03 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_rb(t_stack *stack, int *start, int *end)
{
	pb(stack);
	rb(stack);
	if (*end < stack->size - 1)
	{
		(*start)++;
		(*end)++;
	}
}

void	push_to_b_stack(t_stack *stack, int start, int end)
{
	int	helpsize;

	helpsize = stack->size;
	while (stack->size)
	{
		if (stack->data[0] >= stack->help_stack[start]
			&& stack->data[0] <= stack->help_stack[end])
		{
			pb(stack);
			if (end < helpsize - 1)
			{
				start++;
				end++;
			}
		}
		else if (stack->data[0] < stack->help_stack[start])
			pb_rb(stack, &start, &end);
		else if (stack->data[0] > stack->help_stack[end])
			ra(stack);
	}
}

void	sort_100(t_stack *stack)
{
	int	start;
	int	end;

	start = 0;
	end = 19;
	if (stack->size < end)
	{
		end = 5;
	}
	push_to_b_stack(stack, start, end);
	push_from_bta(stack);
}
