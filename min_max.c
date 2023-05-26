/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:07:37 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/26 11:44:20 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min(t_stack *stack)
{
	int i = 1;
	int min = stack->data[0];
	while(i < stack->size)
	{
		if (stack->data[i] < min)
			min = stack->data[i];
		i++;
	}
	return (min);
}

int max(t_stack *stack)
{
	int i = 1;
	int max = stack->data[0];
	while(i < stack->size)
	{
		if (stack->data[i] > max)
			max = stack->data[i];
		i++;
	}
	// printf("%d\n", max);
	return (max);
}

int max_dclone(t_stack *stack)
{
	int i = 1;
	int max = stack->dclone[0];
	while(i < stack->dsize)
	{
		if (stack->dclone[i] > max)
			max = stack->dclone[i];
		i++;
	}
	// printf("%d\n", max);
	return (max);
}