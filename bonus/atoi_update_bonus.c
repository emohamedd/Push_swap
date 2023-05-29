/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_update_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:55:20 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:37:56 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long long	ft_atoi_up(char *str)
{
	long long	sign;
	long long	result;
	int			i;

	result = 0;
	i = 0;
	sign = 1;
	str = ft_strtrim(str, " ");
	if (str[0] == '\0')
		err();
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			if ((sign * result) > INT_MAX || (sign * result) < INT_MIN)
				err();
		}
		else if (!(str[i] >= '0' && str[i] <= '9'))
			err();
		i++;
	}
	free(str);
	return (sign * result);
}
