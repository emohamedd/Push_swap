/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:54:42 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/15 10:42:55 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_number(int argc, char **argv, int *stack)
{
    int i = argc - 1;  
    int count = 0;
    while (i > 0) 
	{
        stack[count] = atoi(argv[i]);
        count++;
        i--;
    }
	int k = 0;
	while(k < count)
	{
		printf("%d", stack[k]);
		k++;
	}
    return count;
}

int main(int ac, char **av)
{
	int stack[100];
	push_number(ac, av, stack);
	
}