/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_instruction_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 00:07:17 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 15:19:23 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void cmp(char *str, t_stack *stack)
{
    if (ft_strncmp(str, "sa\n", 2) == 0)
        sa(stack);
    else if (ft_strncmp(str, "sb\n", 2) == 0)
        sb(stack);
    else if (ft_strncmp(str, "ss\n", 2) == 0)
        ss(stack);
    else if (ft_strncmp(str, "pb\n", 2) == 0)
        pb(stack);
    else if (ft_strncmp(str, "pa\n", 2) == 0)
        pa(stack);
    else if (ft_strncmp(str, "ra\n", 2) == 0)
        ra(stack);
    else if (ft_strncmp(str, "rb\n", 2) == 0)
        rb(stack);
    else if (ft_strncmp(str, "rr\n", 2) == 0)
        rr(stack);
    else if (ft_strncmp(str, "rra\n", 3) == 0)
        rra(stack);
    else if (ft_strncmp(str, "rrb\n", 3) == 0)
        rrb(stack);
    else if (ft_strncmp(str, "rrr\n", 3) == 0)
        rrr(stack);
    else
        err();
}