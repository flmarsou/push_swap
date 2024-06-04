/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:42:59 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/04 15:44:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
