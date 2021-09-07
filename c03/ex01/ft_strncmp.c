int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	diff = 0;
	while (n > 0)
	{
		if (*s1 -*s2 != '\0' || *s1 == '\0' || *s2 == '\0')
		{
			diff =*s1 -*s2;
			return (diff);
		}
		s1++;
		s2++;
		n--;
	}
	return (diff);
}
