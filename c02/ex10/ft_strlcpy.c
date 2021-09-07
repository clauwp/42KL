unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i =0;
	while (i < (size -1) && size != 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
