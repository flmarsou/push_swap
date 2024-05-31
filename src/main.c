/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:17:40 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/30 10:57:59 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char const *argv[])
{
	if (argc <= 1)
		error_message(1);
	else if (argc == 2)
		single_arg(argv[1]);
	else
		multiple_args(argv);
	return (0);
}
