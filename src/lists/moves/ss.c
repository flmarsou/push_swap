/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:29:13 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/25 12:54:07 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static void	sa_(t_list **stack_a)
{
	t_list	*swap;
	int		temp;

	swap = (*stack_a)->next;
	temp = (*stack_a)->value;
	(*stack_a)->value = swap->value;
	swap->value = temp;
}

static void	sb_(t_list **stack_b)
{
	t_list	*swap;
	int		temp;

	swap = (*stack_b)->next;
	temp = (*stack_b)->value;
	(*stack_b)->value = swap->value;
	swap->value = temp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa_(stack_a);
	sb_(stack_b);
	write(1, "ss\n", 3);
}
