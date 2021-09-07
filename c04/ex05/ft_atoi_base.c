int	ft_strlen(char *str);
int	baseindex(char c, char *str);
int	repeat_char(char c, char *basestr);
int	checkbase(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	isNegative;
	int	num;
	int	basenum;

	isNegative = 1;
	num =0;
	basenum = ft_strlen(base);
	if (!checkbase(base))
		return (0);
	while ((*str >= 9 && *str <=13) || *str ==32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isNegative = -isNegative;
		str++;
	}
	while (baseindex(*str, base) != -1)
	{
		num = (num * basenum) + baseindex(*str, base);
		str++;
	}
	return (num * isNegative);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
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

int	checkbase(char *basestr)
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
				return (0);
			j++;
		}
		i++;
	}
	while (*basestr)
	{
		if (*basestr == '+' || *basestr == '-')
			return (0);
		basestr++;
	}
	return (1);
}
