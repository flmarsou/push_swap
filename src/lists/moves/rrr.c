/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 08:39:19 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/21 13:56:39 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static void	rra_(t_list **stack_a)
{
	t_list	*current;
	t_list	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	current = *stack_a;
	while (current->next->next)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

static void	rrb_(t_list **stack_b)
{
	t_list	*current;
	t_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	current = *stack_b;
	while (current->next->next)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra_(stack_a);
	rrb_(stack_b);
	write(1, "rrr\n", 4);
}
