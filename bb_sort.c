/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:32:47 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/24 14:33:56 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a_to_cpy(t_stack *stack)
{
    int i = 0;

    while (i < stack->size)
    {
        stack->help_stack[i] = stack->data[i];
        i++;
    }
}

void bb_sort(t_stack *stack)
{
    int i = 0;
    int j;
    int tmp;

    while (i < stack->size - 1)
    {
        j = 0;
        while (j < stack->size - 1)
        {
            if (stack->help_stack[j] > stack->help_stack[j + 1])
            {
                tmp = stack->help_stack[j];
                stack->help_stack[j] = stack->help_stack[j + 1];
                stack->help_stack[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}
