int	ft_iterative_factorial(int nb)
{
	int	retnum;

	retnum = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		retnum = retnum*nb;
		nb--;
	}
	return (retnum);
}
