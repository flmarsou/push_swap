/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:49:21 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/29 13:47:47 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_message(int error)
{
	if (error == 1)
		write(1, "Error: No Input\n", 16);
	else if (error == 2)
		write(1, "Error: Not Enough Arguments\n", 28);
	else if (error == 3)
		write(1, "Error: Invalid Input\n", 21);
	exit(0);
}

void	single_arg(char *str)
{
	unsigned int	i;

	i = 0;
	if (count_words(str, ' ') == 1)
		error_message(2);
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!ft_isdigit(str[i]))
			error_message(3);
		i++;
	}
}

void	multiple_args(char **arr)
{
	unsigned int	arg;
	unsigned int	i;

	arg = 1;
	while (arr[arg])
	{
		i = 0;
		while (arr[arg][i])
		{
			if (!ft_isdigit(arr[arg][i]))
				error_message(3);
			i++;
		}
		arg++;
	}
}
