/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:32:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/14 17:35:50 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    int nums[ac];
    int num;
    int i = 0;
    int re = 0;

    if (ac == 1)
        exit(0);

    while (re < ac) 
    {
        nums[re] = 0;
        re++;
    }
    
    int j = 1;
    while (j < ac) 
    {
        num = ft_atoi(av[j]);
        re = 0;
        while (re < i) 
        {

            if (nums[re] == num) 
            {
                ft_printf("%sError\n%s",RED, END);
                return 1;
            }
            re++;
        }

        nums[i] = num;
        i++;
        j++;
    }
    ft_printf("%sSUCCES%s\n", GREEN, END);
    return 0;
}
