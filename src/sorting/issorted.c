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

bool	issorted(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return (false);
		stack_a = stack_a->next;
	}
	return (true);
}
