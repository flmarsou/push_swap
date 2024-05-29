int	count_words(char *str, int target)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == target)
			i++;
		if (str[i] && str[i] != target)
			count++;
		while (str[i] && str[i] != target)
			i++;
	}
	return (count);
}