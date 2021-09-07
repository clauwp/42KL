void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = (unsigned char) c;
		copy--;
		n--;
	}
	return (s);
}
