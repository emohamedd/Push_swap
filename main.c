/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/22 11:35:38 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac , char **av)
{
	t_stack stack;
	char **str;

	if (ac == 1)
		return (1);
	str = linke(av + 1);
	stack.data = malloc(sizeof(int *) * stack.size);
	if (!stack.data)
		return (0);
	stack.dclone = malloc(stack.size * sizeof(int));
	if (!stack.dclone)
		return (0);
	
	if (check_arg(&stack, str) != 1)
		err();
	// int i = 0;
	// while (i < stack.size)
	// {
	// 	printf("%d\n", stack.data[i]);
	// 	i++;
	// }
	// rra(&stack);
	sort_3(&stack);
	int i = 0;
	printf("\n*------------stack A---------------*\n");
	while (i < stack.size)
	{
		printf(" %d\n", stack.data[i]);
		printf("---\n");
		i++;
	}
	printf("*-------------stack B--------------*\n");
	i = 0;
	while (i < stack.dsize)
	{
		printf(" %d\n", stack.dclone[i]);
		printf("---\n");
		i++;
	}
	return (0);
}
