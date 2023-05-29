/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_update.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:55:20 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/29 22:14:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	parse_number(char *str, long long sign)
{
	long long	result;
	int			i;

	result = 0;
	i = 0;
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
	return (sign * result);
}

long long	parse_sign(char **str)
{
	long long	sign;

	sign = 1;
	if ((*str)[0] == '-')
	{
		sign = -1;
		(*str)++;
	}
	else if ((*str)[0] == '+')
		(*str)++;
	return (sign);
}

long long	ft_atoi_up(char *str)
{
	long long	sign;
	long long	result;

	str = ft_strtrim(str, " ");
	if (str[0] == '\0')
		err();
	if (str[0] == '-' || str[0] == '+')
		sign = parse_sign(&str);
	else
		sign = 1;
	result = parse_number(str, sign);
	free(str);
	return (result);
}
