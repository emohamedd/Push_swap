/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:32:21 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	char	**str;
	char	*store_line;

	if (ac == 1)
		return (0);
	str = linke(av + 1);
	check_param(str);
	stack.dsize = 0;
	if (check_arg(&stack, str) != 1)
		err();
	while (1)
	{
		store_line = get_next_line(0);
		if (!store_line)
		{
			if (is_sorted(&stack) == 1 && stack.dsize == 0)
				write(1, "OK\n", 3);
			else
				write(1, "KO\n", 3);
			break ;
		}
		cmp(store_line, &stack);
	}
	return (0);
}
