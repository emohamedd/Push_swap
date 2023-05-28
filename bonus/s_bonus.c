/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_bonus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:29:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 00:57:49 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_stack *stack)
{
	int	i;

	i = 0;
	if (!(stack->size > 1))
		return ;
	i = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = i;
}

void	sb(t_stack *stack)
{
	int	i;

	i = 0;
	if (!(stack->size > 1))
		return ;
	i = stack->dclone[0];
	stack->dclone[0] = stack->dclone[1];
	stack->dclone[1] = i;
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
