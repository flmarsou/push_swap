/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:38:01 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/21 15:59:44 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	min_value(t_list *stack_a)
{
	int		temp;
	int		index;

	temp = stack_a->value;
	index = 1;
	while (stack_a)
	{
		if (stack_a->value < temp)
		{
			temp = stack_a->value;
			index++;
		}
		stack_a = stack_a->next;
	}
	return (index);
}

static void	min_to_stack_b(t_list **stack_a, t_list **stack_b)
{
	if (min_value(*stack_a) == 1)
		pb(stack_b, stack_a);
	else if (min_value(*stack_a) == 2)
	{
		sa(*stack_a);
		pb(stack_b, stack_a);
	}
	else if (min_value(*stack_a) == 3)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_b, stack_a);
	}
	else if (min_value(*stack_a) == (ft_lstsize(*stack_a) - 1))
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_b, stack_a);
	}
	else if (min_value(*stack_a) == ft_lstsize(*stack_a))
	{
		rra(stack_a);
		pb(stack_b, stack_a);
	}
}

static bool	is_sorted(t_list *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->value > stack_a->next->value)
			return (false);
		stack_a = stack_a->next;
	}
	return (true);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 4)
	{
		min_to_stack_b(stack_a, stack_b);
		if (!is_sorted(*stack_a))
			sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	else
	{
		min_to_stack_b(stack_a, stack_b);
		min_to_stack_b(stack_a, stack_b);
		if (!is_sorted(*stack_a))
			sort_three(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
