/*
 * Converts the initial portion of the string pointed
 * by str to its int representation.
 * Function should read the string until
 * the string stop following the rules and return
 * the number found until now.
 * str can be followed by number in the base10.
 * accepted chars: "+", "-" & isspace chars.
 * isspace characters:
 * ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''
 */

int	ft_isspace(char c);

int	ft_atoi(char *str)
{
	int		isNegative;
	int		num;

	isNegative = 1;
	num =0;
	while (*str != '\0' && ft_isspace(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isNegative = -isNegative;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num *10) + (*str -'0');
		str++;
	}
	return (num * isNegative);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <=13) || c ==32)
	{
		return (1);
	}
	return (0);
}
