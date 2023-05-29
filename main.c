/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/29 10:49:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	char	**str;

	if (ac == 1)
		return (0);
	str = linke(av + 1);
	check_param(str);
	stack.data = malloc(sizeof(int *) * stack.size);
	stack.dclone = malloc(stack.size * sizeof(int *));
	stack.dsize = 0;
	if (!stack.dclone)
		return (0);
	if (check_arg(&stack, str) != 1)		err();
	if (is_sorted(&stack) == 0)
		exit(0);
	if (stack.size <= 3)
		sort_3(&stack);
	else if (stack.size <= 5)
		sort_5(&stack);
	else if (stack.size <= 100)
	{
		push_a_to_cpy(&stack);
		bb_sort(&stack);
		sort_100(&stack);
		push_from_bta(&stack);
	}
	else if (stack.size > 100)
	{
		push_a_to_cpy(&stack);
		bb_sort(&stack);
		sort_500(&stack);
		push_from_bta(&stack);
	}
	// system("leaks push_swap | grep 'ROOT LEAK:'");
	while(1);
	return (0);
}
