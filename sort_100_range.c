/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:37:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/27 12:55:24 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_100(t_stack *stack)
{
    int start = 0;
    int end = 15;
    int helpsize;
    
    if (stack->size < end)
        end = 5;
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
}

void push_from_bta(t_stack *stack)
{
    int imax_b;
    while(stack->dsize)
    {
        imax_b  = int_indx_dclone(stack, max_dclone(stack));
        if (imax_b >= stack->dsize / 2) {
            int size = stack->dsize;
            while (imax_b < size) {
                rrb(stack);
                size--;
            }
        }
        else if (imax_b <= stack->dsize / 2) {
            while (imax_b > 0) {
                rb(stack);
                imax_b--;
            }
        }
        pa(stack);
    }
}
