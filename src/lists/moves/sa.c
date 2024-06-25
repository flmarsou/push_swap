/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:29:43 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/25 12:52:29 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*swap;
	int		temp;

	swap = (*stack_a)->next;
	temp = (*stack_a)->value;
	(*stack_a)->value = swap->value;
	swap->value = temp;
	write(1, "sa\n", 3);
}
