/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:50:25 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/04 15:50:21 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	parser(int argc, const char **argv)
{
	unsigned int	i;

	i = 0;
	if (argc == 1)
		error_message(2);
	while (argv[i])
	{
		if (!isnumber(argv[i]))
			error_message(3);
		if (!isduplicate(argv))
			error_message(4);
		i++;
	}
}
