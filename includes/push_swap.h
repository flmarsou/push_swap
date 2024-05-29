/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:00:08 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/29 13:42:09 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>	// write(), read()
# include <stdlib.h>	// malloc(), free(), exit()
# include <stdio.h>		// printf()

// Parser
void	error_message(int error);
void	single_arg(char *str);
void	multiple_args(char **arr);

// Utils
int		ft_isdigit(int c);
int		count_words(char *str, int target);

#endif
