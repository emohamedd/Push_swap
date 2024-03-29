/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   32_prob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:02:40 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/27 16:09:12 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_param(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (((av[i][j] == '-' && av[i][1] == '\0') || (av[i][j] == '+'
						&& av[i][1] == '\0')) || av[i][j] == ' ')
				err();
			j++;
		}
		i++;
	}
}
