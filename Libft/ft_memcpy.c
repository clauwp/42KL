void	*ft_memcpy(void *dst, const void *src, int n)
{
	while (n > 0)
	{
		*dst = *src;
		src++;
		dst++;
		n--;
	}
}
