/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:45:56 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/24 14:10:22 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sorter(t_list **stack_a, t_list **stack_b)
{
	unsigned int	size;

	size = ft_lstsize(*stack_a);
	sorted(*stack_a);
	if (size == 2)
		sort_two(*stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4 || size == 5)
		sort_five(stack_a, stack_b);
	else
	{
		init_sort(*stack_a);
	}
	sorted(*stack_a);
}
