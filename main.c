/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/20 15:51:10 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac , char **av)
{
	t_stack stack_a;
	char **str;
	// t_stack stack_b;
	if (ac == 1)
		return (1);
	str = linke(av + 1);
	if (check_arg(&stack_a, str) != 1)
		err();
	int i = 0;
	while (i < stack_a.size)
	{
		printf("%d ", stack_a.data[i]);
		i++;
	}
	return (0);
}
