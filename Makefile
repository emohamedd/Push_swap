# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 10:36:31 by emohamed          #+#    #+#              #
#    Updated: 2023/05/19 15:47:47 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

NAME = push_swap

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

$(NAME): $(OBJS) 
	make -C printf/ all
	make -C libft/ all
	$(CC) $(CFLAGS) $^ libft/libft.a printf/libftprintf.a -o $@ 

clean:
	make -C libft/ clean
	make -C printf/ clean
	rm -f $(OBJS)

fclean: clean
	make -C libft/ fclean
	make -C printf/ fclean
	rm -f $(NAME)

re: fclean all