/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:48:50 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/15 08:49:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	result = 0;
	i = 0;
	sign = 1;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			ft_printf("%sError%s\n", RED, END);
			exit(1);
		}
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}