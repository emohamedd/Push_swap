/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wish_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 02:50:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 02:57:57 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_100_or_the_500(t_stack *stack)
{
	if (stack->size <= 3)
		sort_3(stack);
	else if (stack->size <= 5)
		sort_5(stack);
	else if (stack->size <= 100)
	{
		pa_to_cpy(stack);
		sort_100(stack);
	}
	else if (stack->size > 100)
	{
		pa_to_cpy(stack);
		sort_500(stack);
	}
}
