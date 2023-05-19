/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:42:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/19 16:02:21 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int check_arg(t_stack *stack, int ac, char **av)
{
	int i;
	
	if (ac == 1)
		return (1);
	stack->size =  ac;
	stack->data = malloc(sizeof(int) * stack->size);
	if (!stack->data)
		return (0);
	i = 0;
	while (i < stack->size)
	{
		stack->data[i] = ft_atoi_up(av[i]);
		i++;
	}
	return (1);
}
