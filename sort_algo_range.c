/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:37:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/26 11:45:54 by emohamed         ###   ########.fr       */
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

void push_from_bta(t_stack *stack)
{
    int max_b; 
    int imax_b;
    while(stack->dsize > 0)
    {
        max_b = max_dclone(stack);
        imax_b  = int_indx_dclone(stack, max_b);

        if (max_b == stack->dclone[0])
            pa(stack);
        else if (imax_b <= stack->dsize / 2)
            rb(stack);
        else if (imax_b > stack->dsize / 2)
            rrb(stack);
    }
}