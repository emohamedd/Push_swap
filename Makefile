# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 10:36:31 by emohamed          #+#    #+#              #
#    Updated: 2023/05/30 21:49:51 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = push_swap
NAME_BONUS = checker

SRCS = 32_prob.c atoi_update.c bb_sort.c check_arg.c get_the_index.c is_sorted.c leaks_killer.c link.c main.c min_max.c print_err.c push_bta.c\
 push_toc_sort.c sort_100_range.c sort_3_i.c sort_500_range.c sort_5_i.c the_p_instruction.c the_r_instruction.c\
 the_rr_instruction.c the_s_instruction.c wish_sort.c
OBJS = $(SRCS:.c=.o)

SRCS_BONUS = bonus/32_prob_bonus.c bonus/atoi_update_bonus.c bonus/check_arg_bonus.c bonus/cmp_instruction_bonus.c bonus/get_next_line.c bonus/get_next_line_utils.c bonus/is_sorted_bonus.c bonus/link_bonus.c bonus/main_bonus.c\
 bonus/p_bonus.c bonus/print_err_bonus.c bonus/r_bonus.c bonus/rr_bonus.c bonus/s_bonus.c
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
