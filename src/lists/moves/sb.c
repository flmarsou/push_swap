/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:28:45 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/25 12:53:13 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sb(t_list **stack_b)
{
	t_list	*swap;
	int		temp;

	swap = (*stack_b)->next;
	temp = (*stack_b)->value;
	(*stack_b)->value = swap->value;
	swap->value = temp;
	write(1, "sb\n", 3);
}
