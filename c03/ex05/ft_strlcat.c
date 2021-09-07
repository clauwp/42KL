unsigned int	ft_strlen(char	*s)
{
	unsigned int	i;

	i =0;
	while (s[i] !='\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	unsigned int	n;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	n =0;
	if (dstlen >= size)
	{
		return (size + srclen);
	}
	while (n < (size - dstlen -1) && src[n] != '\0')
	{
		dest[dstlen +n] = src[n];
		n++;
	}
	if (size > 0)
	{
		dest[dstlen +n] = '\0';
	}
	return (dstlen +srclen);
}
