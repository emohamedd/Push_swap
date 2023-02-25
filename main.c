/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:57:28 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/15 09:15:26 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (check_arg(ac, av) == 0)
	{
		ft_printf("%sSUCCES%s\n", GREEN, END);
		return (0);
	}
	else
		return (1);
}
