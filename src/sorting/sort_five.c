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
	t_list	*current;
	int		temp;
	int		index;
	int		ret;
	
	current = stack_a;
	temp = current->value;
	index = 1;
	ret = 1;
	while (current)
	{
		if (current->value < temp)
		{
			temp = current->value;
			ret = index;
		}
		current = current->next;
		index++;
	}
	return (ret);
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
	else if (min_value(*stack_a) == 4)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_b, stack_a);
	}
	else
	{
		rra(stack_a);
		pb(stack_b, stack_a);
	}
}

static bool	is_sorted(t_list *stack_a)
{
	t_list	*temp;

	temp = stack_a;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (false);
		temp = temp->next;
	}
	return (true);
}

void	sort_stack_a(t_list **stack_a)
{
	if ((*stack_a)->value < (*stack_a)->next->value)
	{
		rra(stack_a);
		is_sorted(*stack_a);
		sa(*stack_a);
	}
	else
	{
		if ((*stack_a)->value < (*stack_a)->next->next->value)
			sa(*stack_a);
		else if ((*stack_a)->next->value < (*stack_a)->next->next->value)
			ra(stack_a);
		else
		{
			sa(*stack_a);
			rra(stack_a);
		}
	}
	is_sorted(*stack_a);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 4)
	{
		min_to_stack_b(stack_a, stack_b);
		sort_stack_a(stack_a);
		pa(stack_a, stack_b);
	}
	else
	{
		min_to_stack_b(stack_a, stack_b);
		min_to_stack_b(stack_a, stack_b);
		sort_stack_a(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	sorted(*stack_a);
}
