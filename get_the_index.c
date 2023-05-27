/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:33:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/27 16:03:31 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	int_indx(t_stack *stack, int i)
{
	int	index;
	int	j;

	index = 0;
	j = 0;
	while (j < stack->size)
	{
		if (stack->help_stack[j] == i)
			index = j;
		j++;
	}
	return (index);
}

int	int_indx_dclone(t_stack *stack, int i)
{
	int	index;
	int	j;

	index = 0;
	j = 0;
	while (j < stack->dsize)
	{
		if (stack->dclone[j] == i)
			index = j;
		j++;
	}
	return (index);
}
