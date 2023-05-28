/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:36:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/28 15:36:26 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

// -----Libs-----//
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


// -----My Struct-----//
typedef struct s_stack
{
	int		*data;
	int		*dclone;
	int		*help_stack;
	int		size;
	int		dsize;
}			t_stack;

// -----My Rules-----//
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		pb(t_stack *stack);
void		pa(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);
// -----Sorting-----//
int			is_sorted(t_stack *stack);
void		sort_3(t_stack *stack);
void		sort_5(t_stack *stack);
void		sort_100(t_stack *stack);
void		sort_500(t_stack *stack);
void		bb_sort(t_stack *stack);
// -----Check Arg-----//
long long	ft_atoi_up(char *str);
int			check_arg(t_stack *stack, char **av);
char		**linke(char **av);
void		check_param(char **av);
long long	ft_atoi_up(char *str);
// -----Stack Play-----//
void		push_a_to_cpy(t_stack *stack);
void		push_from_bta(t_stack *stack);
// -----The Indexing-----//
int			max(t_stack *stack);
int			max_dclone(t_stack *stack);
int			min(t_stack *stack);
int			index_min(t_stack *stack, int min);
int			int_indx(t_stack *stack, int i);
int			int_indx_dclone(t_stack *stack, int i);
// -----Err handler-----//
void		err(void);
void cmp(char *str, t_stack *stack);

// -----Get next line-----//
char	*get_next_line(int fd);
char	*ft_strjoinn(char *s1, char *s2);
char	*new_get_exact_line(char *line);
char	*new_get_line(char *str, int fd);
int		ft_strlenn(char *s);
int		check_str(char *buff);
char	*ft_strchrr(char *string, char chrstr);
#endif