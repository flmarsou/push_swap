/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 08:37:58 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/20 14:52:15 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	rrb(t_list *stack_b)
{
	t_list	*current;
	t_list	*last;

	current = stack_b;
	while (current->next->next)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = stack_b;
	stack_b = last;
	write(1, "rrb\n", 4);
}
