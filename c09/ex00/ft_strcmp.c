int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	int_s1;
	int	int_s2;
	int	diff;

	i =0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		int_s1 = s1[i];
		int_s2 = s2[i];
		if (int_s1 -int_s2 != 0)
		{
			diff =int_s1 -int_s2;
			return (diff);
		}
		i++;
	}
	return (diff);
}
