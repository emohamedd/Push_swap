# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 10:32:42 by emohamed          #+#    #+#              #
#    Updated: 2023/02/15 09:37:33 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

SRCS =  print_exit.c push_swap.c check_arg.c new_atoi.c  main.c

# LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

# GREEN		=	\e[38;5;118m
# YELLOW		=	\e[38;5;226m
# RED			=   \033[0;31m
# RESET		=	\e[0m

# BANNER =	$(GREEN)"██████╗░██╗░░░██╗░██████╗██╗░░██╗░░░░░░░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░"$(RESET) \
# 			$(GREEN)"██╔══██╗██║░░░██║██╔════╝██║░░██║░░░░░░██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗"$(RESET) \
# 			$(GREEN)"██████╔╝██║░░░██║╚█████╗░███████║█████╗╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝"$(RESET) \
# 			$(GREEN)"██╔═══╝░██║░░░██║░╚═══██╗██╔══██║╚════╝░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░"$(RESET) \
# 			$(GREEN)"██║░░░░░╚██████╔╝██████╔╝██║░░██║░░░░░░██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░"$(RESET) \
# 			$(GREEN)"╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝░░░░░░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░"$(RESET) \
	

OBJS = $(SRCS:.c=.o)	

%.o : %.c	
	$(CC) $(CFLAGS) -c $^	
	
all : $(NAME)

$(NAME): $(OBJS)  $(PRINTF)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(PRINTF)
		# @printf "$(BANNER)"

$(PRINTF):
	make -C ft_printf/ all

clean :
	make -C ft_printf/ clean
	rm -f $(OBJS)

fclean : clean
	make -C ft_printf/ fclean
	rm -f $(NAME)	

re : fclean all

.PHONY : all clean fclean re
