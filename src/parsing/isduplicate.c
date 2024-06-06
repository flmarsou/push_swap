/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isduplicate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:31:03 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/05 13:27:28 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	isduplicate(const char **arr)
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
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
