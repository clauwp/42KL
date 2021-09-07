int	ft_memchr(void *str, int c, int n)
{
	unsigned char *copystr;

	copystr = str;
	while (n > 0 && *copystr)
	{
		if (c == *copystr)
			return (copystr);
		n--;
		copystr++;
	}
}