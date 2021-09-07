int	formnum(char *s, int n, char *base);
int	baseindex(char c, char *str);
int	forbidden(char c, char *basestr);
int	powerN(int n, int base);

int	ft_atoi_base(char *str, char *base)
{
	int		negsign;
	int		count;
	int		num;
	char	*temp;

	negsign =0;
	count =0;
	num =0;
	temp = str;
	while (*str != '\0' && !forbidden(*str, base))
	{
		if (*str =='-')
			negsign++;
		else if (baseindex(*str, base) != -1)
		{
			count++;
		}
		str++;
	}
	num = formnum(temp, count, base);
	if (negsign %2 !=0)
		return (-num);
	return (num);
}

int	formnum(char *str, int count, char *basestr)
{
	int	num;
	int	base;

	num =0;
	base =0;
	while (basestr[base])
	{
		base++;
	}
	while (*str != '\0' && !forbidden(*str, basestr) && count >0)
	{
		if (baseindex(*str, basestr) != -1)
		{
			num =num +(baseindex(*str, basestr) * powerN(count - 1, base));
			count--;
		}
		str++;
	}
	return (num);
}

int	baseindex(char c, char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (c == *str)
		{
			return (index);
		}
		index++;
		str++;
	}
	return (-1);
}

int	forbidden(char c, char *basestr)
{
	int	i;
	int	j;

	i =0;
	j =0;
	while (basestr[i])
	{
		j = i +1;
		while (basestr[j])
		{
			if (basestr[i] == basestr[j])
				return (1);
			j++;
		}
		i++;
	}
	if ((c >= 9 && c <=13) || c ==32 || baseindex(c, basestr) != -1)
	{
		return (0);
	}
	else if (c == '-' || c == '+')
	{
		return (0);
	}
	return (1);
}

int	powerN(int	n, int base)
{
	int	num;

	num =1;
	while (n >0)
	{
		num = num *base;
		n--;
	}
	return (num);
}
