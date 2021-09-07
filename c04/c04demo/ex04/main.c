void    ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-12, "abcdegfhij");
	ft_putnbr_base(-2147, "abcdef+");
	ft_putnbr_base(-2147, "abcdeagh");
}
