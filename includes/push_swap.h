/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:14:44 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/30 13:00:28 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>	// write(), read()
# include <stdlib.h>	// malloc(), free(), exit()
# include <stdio.h>		// printf()

// Parsing
void		error_message(int error);
void		single_arg(const char *str);
void		multiple_args(const char *arr[]);

// Utils
int			ft_isdigit(int c);
int			ft_countword(const char *str, char target);
int			ft_strcmp(const char *str1, const char *str2);
const char	**ft_split(const char *str, char target);

#endif
