int	ft_strlcpy(char *dst, char *src, int dst_size)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	while (dst_size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dst_size--;
	}
	*dst = 0;
	return (count);
}
