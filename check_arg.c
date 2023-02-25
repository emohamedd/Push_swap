/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:48:52 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/14 17:49:38 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(int ac, char **av)
{
	int	nums[ac];
	int	num;
	int	i;
	int	re;
	int	j;

	i = 0;
	re = 0;
	if (ac == 1)
		return (0);
	while (re < ac)
	{
		nums[re] = 0;
		re++;
	}
	j = 1;
	while (j < ac)
	{
		num = ft_atoi(av[j]);
		re = 0;
		while (re < i)
		{
			if (nums[re] == num)
			{
				ft_printf("%sError\n%s", RED, END);
				return (1);
			}
			re++;
		}
		nums[i] = num;
		i++;
		j++;
	}
	return (0);
}
