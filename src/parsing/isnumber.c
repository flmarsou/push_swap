/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnumber.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:15:38 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/12 09:01:44 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static bool	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	isnumber(const char *str)
{
	unsigned int	i;

	i = 0;
	if (str[0] == '-' && str[1] != '\0')
		i++;
	if (str[0] == '-' && str[1] == '0')
		return (false);
	if (str[0] == '0' && ft_isdigit(str[1]))
		return (false);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}
