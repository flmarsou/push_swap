/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:49:24 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/24 14:04:50 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, const char **argv)
{
	t_list		*stack_a;
	t_list		*stack_b;
	const char	**split;

	stack_b = NULL;
	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		parser(ft_countwords(argv[1], ' '), split);
		stack_a = init_list(ft_countwords(argv[1], ' '), split);
	}
	else
	{
		parser(argc - 1, argv + 1);
		stack_a = init_list(argc - 1, argv + 1);
	}
	sorter(&stack_a, &stack_b);
	ft_lstfree(stack_a);
	ft_lstfree(stack_b);
	return (0);
}
