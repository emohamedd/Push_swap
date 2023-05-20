/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:29:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/20 16:42:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack stack)
{
	int i = 0;
	
	i = stack.data[0];
	stack.data[0] = stack.data[1];
	stack.data[1] = i; 
}