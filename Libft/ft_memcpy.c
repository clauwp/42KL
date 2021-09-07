void	*ft_memcpy(void *dst, const void *src, int n)
{
	unsigned char * copydst;

	copydst = dst;
	while (n > 0)
	{
		copydst = (unsigned char*) src;
		src++;
		dst++;
		n--;
	}
}
