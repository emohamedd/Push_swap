/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:33:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/24 14:33:40 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int int_indx(t_stack *stack , int i)
{
        int index = 0;
        int j = 0;
        while (j < stack->size)
        {
            if (stack->help_stack[j] == i)
               index = j;
            j++;
        }
        printf("the index is  %d" , index);
        return (index);
        
}