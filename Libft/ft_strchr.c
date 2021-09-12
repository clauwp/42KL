char	*ft_strchr(const char *str, int c)
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
