/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/24 15:22:07 by emohamed         ###   ########.fr       */
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
	stack.data = malloc(sizeof(int) * stack.size);
	if (!stack.data)
		return (0);
	stack.dclone = malloc(stack.size * sizeof(int));
	if (!stack.dclone)
		return (0);
	stack.help_stack = malloc(stack.size * sizeof(int));
	if (!stack.help_stack)
		return (0);
	
	if (check_arg(&stack, str) != 1)
		err();

	// if (is_sorted(&stack) == 0)
	// 	exit(0);
	// if (stack.size <= 3)
	// 	sort_3(&stack);
	// else if (stack.size <= 5)
	// 	sort_5(&stack);
	// is_sorted(&stack);
		
	push_a_to_cpy(&stack);
	bb_sort(&stack);
	sort_100(&stack);
	//  int_indx(&stack, 5);

	int i = 0;
	printf("\n*------------stack A---------------*\n");
	while (i < stack.size)
	{
		printf(" %d\n", stack.data[i]);
		printf("---\n");
		i++;
	}
	i = 0;
	printf("\n*------------stack help---------------*\n");
	while (i < stack.size)
	{
		printf(" %d\n", stack.help_stack[i]);
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
