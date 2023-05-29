/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:54:25 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/29 23:06:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_500(t_stack *stack)
{
	int	start;
	int	end;
	int	helpsize;

	start = 0;
	end = 35;
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
		{
			pb(stack);
			rb(stack);
			if (end < helpsize - 1)
			{
				start++;
				end++;
			}
		}
		else if (stack->data[0] > stack->help_stack[end])
			ra(stack);
	}
	push_from_bta(stack);
}
