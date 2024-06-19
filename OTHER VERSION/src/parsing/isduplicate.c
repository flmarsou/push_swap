/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isduplicate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:31:03 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/12 11:35:05 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	isduplicate(const char **arr)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (!ft_strcmp(arr[i], arr[j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
