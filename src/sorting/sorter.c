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
	int	size;

	size = ft_lstsize(*stack_a);
	if (issorted(*stack_a))
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size <= 5)
		simple_sort(stack_a, stack_b, size);
	else
	{
		init_index(*stack_a);
		radix_sort(stack_a, stack_b, size);
	}
}
