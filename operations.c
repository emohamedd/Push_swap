/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:39:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/26 20:08:15 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sa(int *stack, int size)
{
	int last = size - 1;
	int prec  = last - 1;
	int tmp;
	tmp = stack[last];
	stack[last] = stack[prec];
	stack[prec] = tmp;
}
void sb(int *stack, int size)
{
	int last = size - 1;
	int prec  = last - 1;
	int tmp;
	tmp = stack[last];
	stack[last] = stack[prec];
	stack[prec] = tmp;
}
void ss(int *s_a, int *s_b, int s_sa, int s_sb)
{
	sa(s_a, s_sa);
	sb(s_b, s_sb);
}
