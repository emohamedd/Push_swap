# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 10:36:31 by emohamed          #+#    #+#              #
#    Updated: 2023/05/28 14:59:16 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = push_swap
NAME_BONUS = checker

SRCS = 32_prob.c atoi_update.c bb_sort.c check_arg.c get_the_index.c\
is_sorted.c link.c main.c min_max.c print_err.c sort_100_range.c sort_3_i.c\
sort_500_range.c sort_5_i.c the_p_instruction.c the_r_instruction.c the_rr_instruction.c the_s_instruction.c
OBJS = $(SRCS:.c=.o)

SRCS_BONUS = $(wildcard bonus/*.c)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)



%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@


all : $(NAME)


$(NAME): $(OBJS) 
	make -C libft/ all
	$(CC) $(CFLAGS) $^ libft/libft.a  -o $@ 

$(NAME_BONUS): $(OBJS_BONUS)
	make -C libft/ all
	$(CC) $(CFLAGS) $^ libft/libft.a  -o $@ 

clean:
	make -C libft/ clean
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

bonus: $(NAME_BONUS)
