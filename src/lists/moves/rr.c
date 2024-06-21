/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:15:41 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/21 14:35:21 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static void	ra_(t_list **stack_a)
{
	t_list	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next->next = NULL;
}

static void	rb_(t_list **stack_b)
{
	t_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next->next = NULL;
}


void	rr(t_list **stack_a, t_list **stack_b)
{
	ra_(stack_a);
	rb_(stack_b);
	write(1, "rr\n", 3);
}
