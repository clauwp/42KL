void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rem;
	int	div;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}
