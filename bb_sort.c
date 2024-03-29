/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:32:47 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/24 18:14:53 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_to_cpy(t_stack *stack)
{
	int	i;

	i = 0;
	stack->help_stack = malloc(stack->size * sizeof(int));
	if (!stack->help_stack)
		return ;
	while (i < stack->size)
	{
		stack->help_stack[i] = stack->data[i];
		i++;
	}
}

void	bb_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < stack->size - 1)
	{
		j = 0;
		while (j < stack->size - 1)
		{
			if (stack->help_stack[j] > stack->help_stack[j + 1])
			{
				tmp = stack->help_stack[j];
				stack->help_stack[j] = stack->help_stack[j + 1];
				stack->help_stack[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
