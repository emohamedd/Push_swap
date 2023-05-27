# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 10:36:31 by emohamed          #+#    #+#              #
#    Updated: 2023/05/27 16:42:48 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
SRCS_BONUS = 
OBJS = $(SRCS:.c=.o)

NAME = push_swap
NAME_BONUS = checker

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

$(NAME): $(OBJS) 
	make -C libft/ all
	$(CC) $(CFLAGS) $^ libft/libft.a  -o $@ 

clean:
	make -C libft/ clean
	rm -f $(OBJS)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

bonus: $(CC)  $(CFLAGS) $(SRCS_BONUS) -o $(NAME_BONUS)