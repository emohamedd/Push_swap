/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:07:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/27 16:04:03 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_min(t_stack *stack, int min)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->data[i] == min)
			return (i);
		i++;
	}
	return (-1);
}

void	sort_5(t_stack *stack)
{
	int	mindex;
	int	mine;

	while (stack->size != 3)
	{
		mine = min(stack);
		mindex = index_min(stack, mine);
		if (stack->data[0] == mine)
			pb(stack);
		else if (mindex >= stack->size / 2)
			rra(stack);
		else if (mindex < stack->size / 2)
			ra(stack);
	}
	if (is_sorted(stack) == 1)
		sort_3(stack);
	pa(stack);
	pa(stack);
}
