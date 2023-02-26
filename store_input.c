/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:54:42 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/26 19:56:37 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_number(int argc, char **argv, int *stack)
{
	int	i;
	int	count;
	int	k;
	char tmp;

	i = argc - 1;
	count = 0;
	while (i > 0)
	{
		stack[count] = atoi(argv[i]);
		count++;
		i--;
	}
	k = 0;

	while (k < count)
	{
		printf("%d\n", stack[k]);
		k++;
	}
	return (count);
}

void sa(int *stack, int size)
{
	int last = size - 1;
	int prec  = last - 1;
	int tmp;
	tmp = stack[last];
	stack[last] = stack[prec];
	stack[prec] = tmp;
}

int	main(int ac, char **av)
{
	int size = ac - 1;
	int stack_a[size];
	int stack_b[size];
	push_number(ac, av, stack_a);
	sa(stack_a, size);
// 	int i = 0;
// 	while(i < size)
// 	{
// 		printf("%d ", stack[i]);
// 		i++;
// 	}
 }