/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_instruction_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 00:07:17 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 01:07:43 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void cmp(char *str, t_stack *stack)
{
    if (ft_strncmp(str, "sa\n", 2) == 0)
        sa(stack);
    if (ft_strncmp(str, "sb\n", 2) == 0)
        sb(stack);
    if (ft_strncmp(str, "ss\n", 2) == 0)
        ss(stack);
    if (ft_strncmp(str, "pb\n", 2) == 0)
        pb(stack);
    if (ft_strncmp(str, "pa\n", 2) == 0)
        pa(stack);
    if (ft_strncmp(str, "ra\n", 2) == 0)
        ra(stack);
    if (ft_strncmp(str, "rb\n", 2) == 0)
        rb(stack);
    if (ft_strncmp(str, "rr\n", 2) == 0)
        rr(stack);
    if (ft_strncmp(str, "rra\n", 3) == 0)
        rra(stack);
    if (ft_strncmp(str, "rrb\n", 3) == 0)
        rrb(stack);
    if (ft_strncmp(str, "rr\n", 3) == 0)
        rrr(stack);
}