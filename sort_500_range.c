/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:54:25 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/27 12:49:37 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_500(t_stack *stack)
{
    int start = 0;
    int end = 35;
    int helpsize;
    
    helpsize = stack->size;
    while (stack->size)
    {
        if (stack->data[0] >= stack->help_stack[start] && stack->data[0] <= stack->help_stack[end])
        {
            pb(stack);
            if (end < helpsize - 1)
            {
                start++;
                end++;
            }
        }
        else if (stack->data[0] < stack->help_stack[start])
        {
            pb(stack);
            rb(stack);
            if (end < helpsize - 1)
            {
                start++;
                end++;
            }
        }
        else if (stack->data[0] > stack->help_stack[end])
            ra(stack);
    }
    push_from_bta(stack);
}