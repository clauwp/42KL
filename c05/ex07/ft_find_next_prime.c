int	ft_is_prime(int nb);
int	floor_sqrt(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	temp;

	if (nb <= 1)
	{
		return (0);
	}
	temp = floor_sqrt(nb);
	while (temp > 1)
	{
		if (nb % temp ==0)
		{
			return (0);
		}
		temp--;
	}
	return (1);
}

int	floor_sqrt(int nb)
{
	long	lower;
	long	upper;
	long	ans;

	lower = nb /2;
	while (lower > 0 && (lower * lower > nb))
	{
		lower = lower / 2;
	}
	upper = lower *2;
	ans = (upper + lower) / 2;
	while (ans * ans != nb && upper - lower > 1)
	{
		if (ans * ans > nb)
			upper = ans;
		else if (ans * ans < nb)
			lower = ans;
		else
			return (ans);
		ans = (lower + upper) / 2;
	}
	return (ans);
}
