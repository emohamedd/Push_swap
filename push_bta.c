/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bta.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:43:14 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 21:19:27 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_from_bta(t_stack *stack)
{
	int	imax_b;
	int	size;

	while (stack->dsize)
	{
		imax_b = int_indx_dclone(stack, max_dclone(stack));
		if (imax_b >= stack->dsize / 2)
		{
			size = stack->dsize;
			while (imax_b < size)
			{
				rrb(stack);
				size--;
			}
		}
		else if (imax_b < stack->dsize / 2)
		{
			while (imax_b > 0)
			{
				rb(stack);
				imax_b--;
			}
		}
		pa(stack);
	}
}
