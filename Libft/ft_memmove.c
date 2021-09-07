void    *ft_memmove(void *dst, void *src, int n)
{
    char *temp;

    temp = (char *)dst;
	while (n > 0)
	{		
		src++;
		dst++;
		n--;
	}
    return (temp);
}