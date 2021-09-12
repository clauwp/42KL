char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	if (c = 0)
		return (c);
	while (str[count])
		count++;
	while (count >= 1)
	{
		if (str[count -1] == c)
			return (&str[count]);
		count--;
	}
	return (0);
}
