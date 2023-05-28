/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_bonus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:17:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 00:57:57 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pb(t_stack *stack)
{
	int	i;
	int	tmp;
	int	s;

	stack->dsize++;
	i = stack->dsize;
	tmp = stack->data[0];
	while (i)
	{
		stack->dclone[i] = stack->dclone[i - 1];
		i--;
	}
	stack->dclone[0] = tmp;
	i = 0;
	s = stack->size;
	while (i < s)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
	stack->size--;
}

void	pa(t_stack *stack)
{
	int	i;

	i = stack->size;
	while (i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[0] = stack->dclone[0];
	i = 0;
	while (i < stack->dsize)
	{
		stack->dclone[i] = stack->dclone[i + 1];
		i++;
	}
	stack->size++;
	stack->dsize--;
}
