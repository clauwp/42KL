int	ft_strncmp(char *s1, char *s2, int n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1--;
		s2--;
	}
	return (*s1 - *s2);
}
