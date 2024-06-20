/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:22:14 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/20 14:58:45 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>	// write()
# include <stdlib.h>	// malloc(), free(), exit()
# include <stdio.h>		// printf()
# include <stdbool.h>	// Booleans

// Stack
typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

// Parsing
void		parser(int argc, const char **argv);

bool		isnumber(const char *str);
bool		isoverflow(const char *str);
bool		isduplicate(const char **arr);

// Utils
int			ft_countwords(const char *str, char target);
const char	**ft_split(const char *str, char target);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_atoi(const char *str);

t_list		*ft_lstnew(int value);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstfree(t_list *stack);

// Lists
t_list		*init_list(int argc, const char **argv);

// Moves
void		pa(t_list *stack_a, t_list *stack_b);
void		pb(t_list *stack_b, t_list *stack_a);
void		ra(t_list *stack_a);
void		rb(t_list *stack_b);
void		rr(t_list *stack_a, t_list *stack_b);
void		rra(t_list *stack_a);
void		rrb(t_list *stack_b);
void		rrr(t_list *stack_a, t_list *stack_b);
void		sa(t_list *stack_a);
void		sb(t_list *stack_b);
void		ss(t_list *stack_a, t_list *stack_b);

// Sorting
void		sorter(t_list *stack_a, t_list *stack_b);
void		sorted(t_list *stack_a);

void		sort_two(t_list *stack_a);
void		sort_three(t_list *stack_a);
void		sort_five(t_list *stack_a, t_list *stack_b);

#endif
