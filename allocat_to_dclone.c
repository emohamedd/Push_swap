/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocat_to_dclone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:05:08 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/21 10:53:23 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int allocat_to_dclone(t_stack *stack)
{
	int *p;
	int size;

	size = stack->size;
	p = stack->dclone;
	p = malloc(size * sizeof(int));
	if (!p)
		return (0);
	return (1);
}