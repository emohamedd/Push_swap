/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/20 16:42:35 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac , char **av)
{
	t_stack stack_a;
	// t_stack stack_b;
	char **str;
	if (ac == 1)
		return (1);
	str = linke(av + 1);
	if (check_arg(&stack_a, str) != 1)
		err();
	int i = 0;
	sa(stack_a);
	while (i < stack_a.size)
	{
		printf("%d ", stack_a.data[i]);
		i++;
	}
	return (0);
}
