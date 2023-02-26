/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:39:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/26 20:36:17 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void sa(int *stack_a, int size)
// {
// 	int last = size - 1;
// 	int prec  = last - 1;
// 	int tmp;
// 	tmp = stack_a[last];
// 	stack_a[last] = stack_a[prec];
// 	stack_a[prec] = tmp;
// }
// void sb(int *stack_b, int size)
// {
// 	int last = size - 1;
// 	int prec  = last - 1;
// 	int tmp;
// 	tmp = stack_b[last];
// 	stack_b[last] = stack_b[prec];
// 	stack_b[prec] = tmp;
// }
// void ss(int *s_a, int *s_b, int s_sa, int s_sb)
// {
// 	sa(s_a, s_sa);
// 	sb(s_b, s_sb);
// }
#include <stdio.h>
void pa(int *s_a, int size)
{
    int i = 0;
    int stock_top_a;
    while (s_a[i] < size)
    {
        stock_top_a = i + 1;
        i++;
    }
    printf("The top of stack -> %d\n", stock_top_a);
}

int main(int ac, char **av)
{
    int size = ac - 1;
    int stack[size];	
    pa(stack, size);
}
	