/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:54:25 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/26 14:18:41 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_500(t_stack *stack)

{
    int start = 0;
    int end = 35;
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
push_from_bta(stack);
}