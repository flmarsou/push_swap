/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:47:58 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/24 08:42:42 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sorted(t_list *stack_a)
{
	t_list	*temp;

	temp = stack_a;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return ;
		temp = temp->next;
	}
	write(1, "\e[1;32mOK\n\e[0m", 14);
	exit(0);
}
