int	ft_str_is_printable(char *str)
{
	int	i;
	int	index;

	i = 1;
	index =0;
	while (str[index] != '\0')
	{
		if ((str[index] - ' ' < '\0'))
		{
			i =0;
		}
		index++;
	}
	return (i);
}
