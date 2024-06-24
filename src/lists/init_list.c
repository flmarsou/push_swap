/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:43:39 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/18 15:44:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*init_list(int argc, const char **argv)
{
	t_list	*head;
	t_list	*current;
	int		i;

	i = 0;
	head = ft_lstnew(ft_atoi(argv[i++]));
	current = head;
	while (i < argc)
	{
		current->next = ft_lstnew(ft_atoi(argv[i]));
		current = current->next;
		i++;
	}
	return (head);
}
