/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:14:18 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/21 14:36:12 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	rb(t_list **stack_b)
{
	t_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next->next = NULL;
	write(1, "rb\n", 3);
}
