char	*ft_strchr(char *str, char c)
{
	if (c = 0)
		return (c);
	while (*str)
	{
		if (c == *str)
			return (str);
		str++;
	}
	return (0);
}
