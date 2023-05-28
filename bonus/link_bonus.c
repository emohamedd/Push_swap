/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 00:28:53 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	**linke(char **av)
{
	int		i;
	char	*s;
	char	*str;
	char	**store;

	i = 0;
	s = "";
	while (av[i])
	{
		s = ft_strjoin(s, " ");
		str = ft_strtrim(av[i], " ");
		s = ft_strjoin(s, str);
		i++;
	}
	store = ft_split(s, ' ');
	return (store);
}
