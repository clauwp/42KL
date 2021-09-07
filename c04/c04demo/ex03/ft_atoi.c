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

int	power10(int n);
int	ft_isspace(char c);
int	forbidden(char c);
int	formnum(char *s, int n);

int	ft_atoi(char *str)
{
	int		negsign;
	int		count;
	int		num;
	char	*temp;

	negsign =0;
	count =0;
	num =0;
	temp = str;
	while (*str != '\0' && !forbidden(*str))
	{
		if (*str =='-')
			negsign++;
		else if (*str >= '0' && *str <= '9')
		{
			count++;
		}
		str++;
	}
	num = formnum(temp, count);
	if (negsign %2 !=0)
		return (-num);
	return (num);
}

int	formnum(char *str, int count)
{
	int	num;

	num =0;
	while (*str != '\0' && !forbidden(*str) && count >0)
	{
		if (*str >= '0' && *str <= '9')
		{
			num =num +((*str - '0') * power10(count - 1));
			count--;
		}
		str++;
	}
	return (num);
}

int	forbidden(char c)
{
	if (ft_isspace(c) || (c >= '0' && c <='9'))
	{
		return (0);
	}
	else if (c == '-' || c == '+')
	{
		return (0);
	}
	return (1);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <=13) || c ==32)
	{
		return (1);
	}
	return (0);
}

int	power10(int	n)
{
	int	num;

	num =1;
	while (n >0)
	{
		num = num *10;
		n--;
	}
	return (num);
}
