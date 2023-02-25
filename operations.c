/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:39:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/25 12:13:59 by emohamed         ###   ########.fr       */
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