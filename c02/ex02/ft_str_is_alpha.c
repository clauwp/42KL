int	ft_str_is_alpha(char *str)
{
	int	i;
	int	index;

	i = 1;
	index =0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'z')
		{
			i = 0;
		}
		else if (str[index] > 'Z' && str[index] <'a')
		{
			i =0;
		}
		index++;
	}
	return (i);
}
