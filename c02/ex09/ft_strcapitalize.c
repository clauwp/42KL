int		uppercase(char *str, int i);
int		lowercase(char *str, int i);
void	capfirst(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i =1;
	capfirst(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (uppercase(str, i))
			{
				str[i] = str[i] - ' ';
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (lowercase(str, i))
			{
				str[i] = str[i] + ' ';
			}
		}
		i++;
	}
	return (str);
}

void	capfirst(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ' ';
	}
}

int	uppercase(char	*str, int i)
{
	int	indicator;

	indicator =0;
	if (str[i -1] < '0' || str[i -1] > 'z')
	{
		indicator = 1;
	}
	else if (str[i -1] > '9' && str[i -1] < 'A')
	{
		indicator =1;
	}
	else if (str[i -1] > 'Z' && str[i -1] < 'a')
	{
		indicator =1;
	}
	return (indicator);
}

int	lowercase(char *str, int i)
{
	int	indicator;

	indicator = 0;
	if (str[i -1] >= 'a' && str[i -1] <= 'z')
	{
		indicator =1;
	}
	else if (str[i -1] >= 'A' && str[i -1] <= 'Z')
	{
		indicator =1;
	}
	else if (str[i -1] >= '0' && str[i -1] <= '9')
	{
		indicator =1;
	}
	return (indicator);
}
