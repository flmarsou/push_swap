/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:22:14 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/06 11:14:37 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>	// write()
# include <stdlib.h>	// malloc(), free(), exit()

// Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

// Parsing
void		parser(int argc, const char **argv);

int			isnumber(const char *str);
int			isoverflow(const char *str);
int			isduplicate(const char **arr);

// Utils
int			ft_countwords(const char *str, char target);
const char	**ft_split(const char *str, char target);
int			ft_strcmp(const char *str1, const char *str2);

#endif
