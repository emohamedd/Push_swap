/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/30 05:45:00 by emohamed         ###   ########.fr       */
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
	stack.dsize = 0;
	if (check_arg(&stack, str) != 1)
		err();
	if (is_sorted(&stack) == 0)
		exit(0);
	the_100_or_the_500(&stack);
	free_stack(&stack);
	return (0);
}
