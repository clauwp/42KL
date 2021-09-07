char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*savestr;

	savestr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb >0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	if (nb >= 0)
	{
		*dest = '\0';
	}
	return (savestr);
}
