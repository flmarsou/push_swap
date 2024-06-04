/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:22:14 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/04 15:52:41 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>	// write()
# include <stdlib.h>	// malloc(), free(), exit()

// Parsing
void		parser(int argc, const char **argv);
void		error_message(int error);

int			isnumber(const char *str);
int			isduplicate(const char **arr);

// Utils
int			ft_countwords(const char *str, char target);
const char	**ft_split(const char *str, char target);
int			ft_strcmp(const char *str1, const char *str2);

#endif
