/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:42:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/20 11:50:29 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_arg(t_stack *stack, char **av)
{
	int i;
	int j;
	
	i = 0;
	while (av[i])
		i++;
	stack->size =  i;
	
	stack->data = malloc(sizeof(int *) * stack->size);
	if (!stack->data)
		return (0);
	i = 0;
	while (i < stack->size)
	{
		stack->data[i] = ft_atoi_up(av[i]);
		i++;
	}
	i = 0;
	while(i < stack->size)
	{
		j = i + 1;
		while(j < stack->size)
		{
			if(stack->data[i] == stack->data[j])
			{
				err();
			}
			j++;
		}
		i++;
	}
	return (1);
}