/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:49:24 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/14 16:27:29 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, const char **argv)
{
	t_list	*stack_a;

	if (argc == 2)
	{
		parser(ft_countwords(argv[1], ' '), ft_split(argv[1], ' '));
		stack_a = init_list(ft_countwords(argv[1], ' '), ft_split(argv[1], ' '));
	}
	else
	{
		parser(argc - 1, argv + 1);
		stack_a = init_list(argc - 1, argv + 1);
	}
	exit(0);
}
