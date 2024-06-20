/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:11:27 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/20 14:57:03 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	pb(t_list *stack_b, t_list *stack_a)
{
	t_list	*temp;

	temp = stack_b;
	stack_b = stack_b->next;
	temp->next = stack_a;
	stack_a = temp;
	write(1, "pb\n", 3);
}
