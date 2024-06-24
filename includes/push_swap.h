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

/* ************************************************************************** */
/*                                                                            */
/*                                  PARSING                                   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Goes through all the arguments to see if everything can be processed further.
 * Displays an error message and exits the program otherwise.
*/
void		parser(int argc, const char **argv);

/**
 * Boolean that checks if args only has numbers.
*/
bool		isnumber(const char *str);

/**
 * Boolean that checks for any overflow.
*/
bool		isoverflow(const char *str);

/**
 * Boolean that checks if any arg appears twice.
*/
bool		isduplicate(const char **arr);

/* ************************************************************************** */
/*                                                                            */
/*                                   UTILS                                    */
/*                                                                            */
/* ************************************************************************** */

/**
 * Counts the number of words in a string.
*/
int			ft_countwords(const char *str, char target);

/**
 * Seperates a string into an array of strings.
*/
const char	**ft_split(const char *str, char target);

/**
 * Checks for a difference between two strings.
*/
int			ft_strcmp(const char *str1, const char *str2);

/**
 * Converts a string into an integer.
*/
int			ft_atoi(const char *str);

/**
 * Creates and allocates a new list.
*/
t_list		*ft_lstnew(int value);

/**
 * Returns the last element of a list.
*/
t_list		*ft_lstlast(t_list *lst);

/**
 * Returns the size of a list.
*/
int			ft_lstsize(t_list *lst);

/**
 * Frees a list and its elements.
*/
void		ft_lstfree(t_list *stack);

/* ************************************************************************** */
/*                                                                            */
/*                                   LISTS                                    */
/*                                                                            */
/* ************************************************************************** */

/**
 * Initializes a linked list named "Stack A", which stores every input.
*/
t_list		*init_list(int argc, const char **argv);

/* ************************************************************************** */
/*                                                                            */
/*                                   MOVES                                    */
/*                                                                            */
/* ************************************************************************** */

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
 * `1 2 3 4 5` -> `2 3 4 5 1`
*/
void		ra(t_list **stack_a);

/**
 * Shift up all elements of Stack B by 1 (first becomes last).
 * `1 2 3 4 5` -> `2 3 4 5 1`
*/
void		rb(t_list **stack_b);

/**
 * `ra` and `rb` at the same time.
*/
void		rr(t_list **stack_a, t_list **stack_b);

/**
 * Shift down all elements of Stack A by 1 (last becomes first).
 * `1 2 3 4 5` -> `5 1 2 3 4`
*/
void		rra(t_list **stack_a);

/**
 * Shift down all elements of Stack B by 1 (last becomes first).
 * `1 2 3 4 5` -> `5 1 2 3 4`
*/
void		rrb(t_list **stack_b);

/**
 * `rra` and `rrb` at the same time.
*/
void		rrr(t_list **stack_a, t_list **stack_b);

/**
 * Swap the first 2 elements at the top of Stack A.
 * `1 2 3 4 5` -> `2 1 3 4 5`
*/
void		sa(t_list *stack_a);

/**
 * Swap the first 2 elements at the top of Stack B.
 * `1 2 3 4 5` -> `2 1 3 4 5`
*/
void		sb(t_list *stack_b);

/**
 * `sa` and `sb` at the same time.
*/
void		ss(t_list *stack_a, t_list *stack_b);

/* ************************************************************************** */
/*                                                                            */
/*                                  SORTING                                   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks how many numbers to sort, calling the correct algorithm.
*/
void		sorter(t_list **stack_a, t_list **stack_b);

/**
 * Function that checks if the `stack_a` is sorted, exit the program if so.
*/
void		sorted(t_list *stack_a);

/**
 * Sort two numbers: `1 move`
*/
void		sort_two(t_list *stack_a);

/**
 * Sort three numbers: `1~2 moves`
*/
void		sort_three(t_list **stack_a);

/**
 * Sort four or five numbers: ``
*/
void		sort_five(t_list **stack_a, t_list **stack_b);

#endif
