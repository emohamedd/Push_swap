# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 10:32:42 by emohamed          #+#    #+#              #
#    Updated: 2023/02/14 17:50:06 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

SRCS =  print_exit.c push_swap.c check_arg.c

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $^
	
all : $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT) $(PRINTF)

$(LIBFT):
	make -C libft/ all
$(PRINTF):
	make -C ft_printf/ all

clean :
	make -C libft/ clean
	make -C ft_printf/ clean
	rm $(OBJS)

fclean : clean
	make -C libft/ fclean
	make -C ft_printf/ fclean
	rm $(NAME)	

re : fclean all

.PHONY : all clean fclean re
	