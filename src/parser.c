/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:19:04 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/30 13:07:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_message(int error)
{
	if (error == 1)
		write(1, "\e[1;31mError:\e[1;97m No Input\n", 30);
	if (error == 2)
		write(1, "\e[1;31mError:\e[1;97m Not Enough Arguments\n", 42);
	if (error == 3)
		write(1, "\e[1;31mError:\e[1;97m Invalid Input\n", 35);
	if (error == 4)
		write(1, "\e[1;31mError:\e[1;97m Duplicates Found\n", 38);
	if (error == 5)
		write(1, "\e[1;31mError:\e[1;97m Int Overflow\n", 34);
	exit(0);
}

static void	duplicates(const char *arr[])
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (!ft_strcmp(arr[i], arr[j]))
				error_message(4);
			j++;
		}
		i++;
	}
}

void	single_arg(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!ft_isdigit(str[i]))
			error_message(3);
		i++;
	}
	if (ft_countword(str, ' ') == 1)
		error_message(2);
	duplicates(ft_split(str, ' '));
}

void	multiple_args(const char *arr[])
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
	duplicates(arr);
}
