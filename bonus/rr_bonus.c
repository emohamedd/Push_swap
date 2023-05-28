/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:26:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 00:57:44 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->size;
	if (stack->size > 1)
	{
		tmp = stack->data[stack->size - 1];
		while (i > 0)
		{
			stack->data[i] = stack->data[i - 1];
			i--;
		}
		stack->data[0] = tmp;
	}
}

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->dsize;
	if (stack->dsize > 1)
	{
		tmp = stack->dclone[stack->dsize - 1];
		while (i > 0)
		{
			stack->dclone[i] = stack->dclone[i - 1];
			i--;
		}
		stack->dclone[0] = tmp;
	}
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
