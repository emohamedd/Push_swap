/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:32:35 by emohamed          #+#    #+#             */
/*   Updated: 2023/02/15 08:48:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"


void print(char *str);
int check_arg(int ac, char **av) ;
int	ft_atoi(char *str);

#endif