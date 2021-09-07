/*
 * Returns 1 if: >=1 element from tab being passed into f
 * returns an int != 0
 * else return 0
 */

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if ((*f)(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}
