/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:29:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/20 17:30:22 by emohamed         ###   ########.fr       */
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
int pb(t_stack stack)
{
	int i = stack.size;
	int *arr = stack.dclone;
	
	int j;
	j = 0;
	while (j < i)
	{
		arr[0] = stack.data[0];
		j++;
	}

}