/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:42:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 00:29:00 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_arg(t_stack *stack, char **av)
{
	int	i;
	int	j;
	int	o;
	int	c;

	i = 1;
	o = 0;
	c = 0;
	while (av[i])
	{
		c = 0;
		while (ft_split(av[i], ' ')[c])
		{
			c++;
			o++;
		}
		i++;
	}
	stack->size = o + 1;
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
	while (i < stack->size)
	{
		j = i + 1;
		while (j < stack->size)
		{
			if (stack->data[i] == stack->data[j])
			{
				err();
			}
			j++;
		}
		i++;
	}
	return (1);
}