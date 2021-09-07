int	ft_memchr(void *str, int c, int n)
{
	while (n > 0 && *str)
	{
		if (c == *str)
			return (str);
		n--;
		str++;
	}
}
