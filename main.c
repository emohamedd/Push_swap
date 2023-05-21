/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/21 10:52:46 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac , char **av)
{
	t_stack stack_a;
	t_stack stack_b;
	char **str;
	if (ac == 1)
		return (1);
	str = linke(av + 1);
	stack_b.data = malloc(sizeof(int *) * stack_a.size);
	if (!stack_b.data)
		return (0);
	stack_b.size = 0;
	if (check_arg(&stack_a, str) != 1)
		err();
	int i = 0;
	while (i < stack_a.size)
	{
		printf("%d ", stack_a.data[i]);
		i++;
	}
	pb(stack_a);
	i = 0;
	while (i < stack_b.dclone)
	{
		printf("%d ", stack_b.dclone[i]);
		i++;
	}
	return (0);
}
