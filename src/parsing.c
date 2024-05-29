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

static void	error_message(int error)
{
	if (error == 1)
		write(1, "\033[1;31mError:\033[0m No Input\n", 27);
	if (error == 2)
		write(1, "\033[1;31mError:\033[0m Invalid Arguments\n", 36);
	if (error == 3)
		write(1, "\033[1;31mError:\033[0m Not Enough Arguments\n", 39);
	if (error == 4)
		write(1, "\033[1;31mError:\033[0m Int Overflow\n", 31);
	exit(0);
}

static int	is_number(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	error_checker(int argc, char *argv[])
{
	unsigned int	i;

	i = 1;
	if (argc <= 1)
		error_message(1);
	if (argc == 2)
	{
		if ()
	}
	while (i < argc)
	{
		if (!is_number(argv[i]))
			error_message(2);
		i++;
	}
	printf("\033[1;32mCorrect Arguments!\033[0m\n");
}

int	main(int argc, char *argv[])
{
	error_checker(argc, argv);
	return (0);
}
