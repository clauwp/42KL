int	ft_iterative_power(int nb, int power)
{
	int	retnum;

	retnum =1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		retnum = nb * retnum;
		power--;
	}
	return (retnum);
}
