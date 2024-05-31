/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:53:06 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/30 13:00:34 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static char	*grab_words(const char *str, char target, int reset)
{
	static int	i = 0;
	int			j;
	char		*word;

	j = 0;
	if (!reset)
	{
		while (str[i] && str[i] == target)
			i++;
		while (str[i + j] && str[i + j] != target)
			j++;
		word = malloc(sizeof(char) * (j + 1));
		j = 0;
		while (str[i] && str[i] != target)
		{
			word[j] = str[i];
			j++;
			i++;
		}
		word[j] = '\0';
		return (word);
	}
	i = 0;
	return (NULL);
}

const char	**ft_split(const char *str, char target)
{
	int			i;
	int			count;
	const char	**ret;

	i = 0;
	count = ft_countword(str, target);
	ret = malloc(sizeof(char *) * (count + 1));
	if (ret == NULL)
		return (NULL);
	while (count > 0)
	{
		ret[i] = grab_words(str, target, 0);
		i++;
		count--;
	}
	ret[i] = grab_words(str, target, 1);
	return (ret);
}
