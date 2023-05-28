/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_bonus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:26:37 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 00:57:38 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	if (stack->size > 1)
	{
		tmp = stack->data[0];
		while (i < stack->size)
		{
			stack->data[i] = stack->data[i + 1];
			i++;
		}
		stack->data[stack->size - 1] = tmp;
	}
}

void	rb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	if (stack->dsize > 1)
	{
		tmp = stack->dclone[0];
		while (i < stack->dsize)
		{
			stack->dclone[i] = stack->dclone[i + 1];
			i++;
		}
		stack->dclone[stack->dsize - 1] = tmp;
	}
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}
