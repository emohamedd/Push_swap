/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:32:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/14 17:49:27 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av) {
    if (check_arg(ac, av) == 0) 
    {
        ft_printf("%sSUCCES%s\n", GREEN, END);
        return 0;
    } 
    else
    {
        return 1;
    }
}
