/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:05:21 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/24 14:10:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_list **stack_a)
{
	if ((*stack_a)->value < (*stack_a)->next->value)
	{
		rra(stack_a);
		sorted(*stack_a);
		sa(*stack_a);
	}
	else
	{
		if ((*stack_a)->value < (*stack_a)->next->next->value)
			sa(*stack_a);
		else if ((*stack_a)->next->value < (*stack_a)->next->next->value)
			ra(stack_a);
		else
		{
			sa(*stack_a);
			rra(stack_a);
		}
	}
}
