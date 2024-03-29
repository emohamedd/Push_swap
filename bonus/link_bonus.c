/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:37:04 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:34:27 by emohamed         ###   ########.fr       */
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
	while (av[i])
	{
		str = ft_strtrim(av[i], " ");
		if (ft_strlen(str) == 0)
			err();
		s = ft_strjoin(s, str);
		free(str);
		s = ft_strjoin(s, " ");
		i++;
	}
	store = ft_split(s, ' ');
	free(s);
	return (store);
}
