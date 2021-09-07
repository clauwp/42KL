void	*ft_memset(void *s, int c, int n)
{
	void	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = c;
		copy--;
		n--;
	}
	return (s);
}
