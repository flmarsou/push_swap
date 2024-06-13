/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:22:14 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/13 14:00:26 by flmarsou         ###   ########.fr       */
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
	int				index;
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

// Lists
t_list		*init_list(int argc, const char **argv);
void		free_list(t_list *stack);

// Moves

#endif
