/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:50:25 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/20 16:00:48 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	error_message(int error)
{
	if (error == 1)
		write(1, "\e[1;31mError:\e[1;97m Invalid Input\n\e[0m", 40);
	if (error == 2)
		write(1, "\e[1;31mError:\e[1;97m Int Overflow\n\e[0m", 39);
	if (error == 3)
		write(1, "\e[1;31mError:\e[1;97m Duplicates Found\n\e[0m", 43);
	exit(1);
}

void	parser(int argc, const char **argv)
{
	unsigned int	i;

	i = 0;
	if (argc == 0)
		exit(0);
	while (argv[i])
	{
		if (!isnumber(argv[i]))
			error_message(1);
		if (!isoverflow(argv[i]))
			error_message(2);
		i++;
	}
	if (argc == 1)
		exit(0);
	if (!isduplicate(argv))
		error_message(3);
}
