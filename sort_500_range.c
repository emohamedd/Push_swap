/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:54:25 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 02:28:45 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_500(t_stack *stack)
{
	int	start;
	int	end;

	start = 0;
	end = 35;
	push_to_b_stack(stack, start, end);
	push_from_bta(stack);
}
