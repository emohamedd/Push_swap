/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_toc_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 02:45:27 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 02:58:08 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_to_cpy(t_stack *stack)
{
	push_a_to_cpy(stack);
	bb_sort(stack);
}
