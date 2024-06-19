/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isoverflow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:13:21 by flmarsou          #+#    #+#             */
/*   Updated: 2024/06/12 09:01:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	isoverflow(const char *str)
{
	int		i;
	int		is_negative;
	long	result;

	i = 0;
	is_negative = 0;
	result = 0;
	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		result = -result;
	if (result < -2147483648 || result > 2147483647)
		return (false);
	return (true);
}
