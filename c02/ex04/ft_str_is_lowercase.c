int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	index;

	i = 1;
	index =0;
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z')
		{
			i =0;
		}
		index++;
	}
	return (i);
}
