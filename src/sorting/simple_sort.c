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

static int	min_value(t_list **stack_a)
{
	t_list	*i;
	t_list	*j;
	int		index;

	i = *stack_a;
	j = *stack_a;
	index = 1;
	while (i)
	{
		while (i->value <= j->value)
		{
			if (!j->next)
				return (index);
			j = j->next;
		}
		i = i->next;
		j = i;
		index++;
	}
	return (0);
}

static void	min_to_stack_b(t_list **stack_a, t_list **stack_b)
{
	if (min_value(stack_a) == 1)
		pb(stack_b, stack_a);
	else if (min_value(stack_a) == 2)
	{
		sa(stack_a);
		pb(stack_b, stack_a);
	}
	else if (min_value(stack_a) == 3)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_b, stack_a);
	}
	else if (min_value(stack_a) == (ft_lstsize(*stack_a) - 1))
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_b, stack_a);
	}
	else if (min_value(stack_a) == ft_lstsize(*stack_a))
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

static void	sort_three(t_list **stack_a)
{
	int	first;
	int	middle;
	int	last;

	first = (*stack_a)->value;
	middle = (*stack_a)->next->value;
	last = (*stack_a)->next->next->value;
	if (first < middle && middle > last && last > first)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (first > middle && middle < last && last > first)
		sa(stack_a);
	else if (first < middle && middle > last && last < first)
		rra(stack_a);
	else if (first > middle && middle < last && last < first)
		ra(stack_a);
	else
	{
		ra(stack_a);
		sa(stack_a);
	}
}

void	simple_sort(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
	{
		min_to_stack_b(stack_a, stack_b);
		if (!is_sorted(*stack_a))
			sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	else if (size == 5)
	{
		min_to_stack_b(stack_a, stack_b);
		min_to_stack_b(stack_a, stack_b);
		if (!is_sorted(*stack_a))
			sort_three(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
