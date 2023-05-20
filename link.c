/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/20 11:42:32 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **linke(char **av)
{
	int i = 0;
	char *s = "";
	while (av[i])
	{
		char *str = ft_strtrim(av[i], " ");
		s = ft_strjoin(s, str);
		s = ft_strjoin(s, " ");
		i++;
	}
	char **store = ft_split(s, ' ');
	return (store);
}
