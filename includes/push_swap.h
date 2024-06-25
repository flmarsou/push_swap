/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:22:14 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/24 14:16:38 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>	// write()
# include <stdlib.h>	// malloc(), free(), exit()
# include <stdio.h>		// printf()
# include <stdbool.h>	// Booleans

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

//===============================//
//            Parsing            //
//===============================//

void		parser(int argc, const char **argv);

bool		isnumber(const char *str);
bool		isoverflow(const char *str);
bool		isduplicate(const char **arr);

//===============================//
//             Utils             //
//===============================//

int			ft_countwords(const char *str, char target);
const char	**ft_split(const char *str, char target);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_atoi(const char *str);

t_list		*ft_lstnew(int value);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstfree(t_list *stack);

//===============================//
//             Lists             //
//===============================//

t_list		*init_list(int argc, const char **argv);

void		init_index(t_list *stack_a);

//===============================//
//             Moves             //
//===============================//

/**
 * Push the first element at the top of Stack A, 
 * and put it at the top of Stack B.
*/
void		pa(t_list **stack_a, t_list **stack_b);

/**
 * Push the first element at the top of Stack B, 
 * and put it at the top of Stack A.
*/
void		pb(t_list **stack_a, t_list **stack_b);

/**
 * Shift up all elements of Stack A by 1 (first becomes last).
 * - `1 2 3 4 5` -> `2 3 4 5 1`
*/
void		ra(t_list **stack_a);

/**
 * Shift up all elements of Stack B by 1 (first becomes last).
 * - `1 2 3 4 5` -> `2 3 4 5 1`
*/
void		rb(t_list **stack_b);

/**
 * `ra` and `rb` at the same time.
*/
void		rr(t_list **stack_a, t_list **stack_b);

/**
 * Shift down all elements of Stack A by 1 (last becomes first).
 * - `1 2 3 4 5` -> `5 1 2 3 4`
*/
void		rra(t_list **stack_a);

/**
 * Shift down all elements of Stack B by 1 (last becomes first).
 * - `1 2 3 4 5` -> `5 1 2 3 4`
*/
void		rrb(t_list **stack_b);

/**
 * `rra` and `rrb` at the same time.
*/
void		rrr(t_list **stack_a, t_list **stack_b);

/**
 * Swap the first 2 elements at the top of Stack A.
 * - `1 2 3 4 5` -> `2 1 3 4 5`
*/
void		sa(t_list **stack_a);

/**
 * Swap the first 2 elements at the top of Stack B.
 * - `1 2 3 4 5` -> `2 1 3 4 5`
*/
void		sb(t_list **stack_b);

/**
 * `sa` and `sb` at the same time.
*/
void		ss(t_list **stack_a, t_list **stack_b);

//===============================//
//            Sorting            //
//===============================//

void		sorter(t_list **stack_a, t_list **stack_b);
void		sorted(t_list *stack_a);

/**
 * Little and manual sorting algorithm, sorting between 3 to 5 numbers.
 * - 3 numbers: `1~2 moves`
 * - 4 numbers: `3~5 moves`
 * - 5 numbers: `5~10 moves`
*/
void		simple_sort(t_list **stack_a, t_list **stack_b, int size);
void		radix_sort(t_list **stack_a, t_list **stack_b);

#endif
