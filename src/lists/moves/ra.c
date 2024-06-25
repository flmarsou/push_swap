/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:43:04 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/21 15:09:07 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*last;

	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next->next = NULL;
	write(1, "ra\n", 3);
}
