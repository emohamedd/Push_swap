/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:37:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/24 18:56:23 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void sort_100(t_stack *stack)
{
    int start = 0;
    int end = 15;
    int helpsize;
    
    helpsize = stack->size;
    while (stack->size > 0)
    {
        int index = int_indx(stack, stack->data[0]);
        if (index >= start && index <= end)
        {
            pb(stack);
            if (end < helpsize)
            {
                start++;
                end++;
            }
        }
        else if (index < start)
        {
            pb(stack);
            rb(stack);
            if (end < helpsize)
            {
                start++;
                end++;
            }
        }
        else if (end < index)
            ra(stack);
    }
} 