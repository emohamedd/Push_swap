/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:42:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 06:03:35 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	allocat_to_stack(t_stack *stack, char **av)
{
	int		i;
	int		o;
	int		c;
	char	**ptr;

	i = 0;
	o = 0;
	c = 0;
	while (av[i])
	{
		c = 0;
		ptr = ft_split(av[i], ' ');
		while (ptr[c])
		{
			free(ptr[c]);
			c++;
			o++;
		}
		free(ptr);
		i++;
	}
	stack->size = o;
	stack->data = malloc(sizeof(int) * stack->size);
	stack->dclone = malloc(stack->size * sizeof(int));
}

void	fill_stack(t_stack *stack, char **av)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		stack->data[i] = ft_atoi_up(av[i]);
		i++;
	}
}

void	check_duplicates(t_stack *stack)
{
	int	i;
	int	j;

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
}

int	check_arg(t_stack *stack, char **av)
{
	allocat_to_stack(stack, av);
	fill_stack(stack, av);
	check_duplicates(stack);
	return (1);
}
