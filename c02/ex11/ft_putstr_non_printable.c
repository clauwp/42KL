#include <unistd.h>

void	chartohexa(int c_as_int);

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i =0;
	while (str[i] != '\0')
	{
		if ((str[i] >=0 && str[i] < 32) || str[i] == 127)
		{
			j = str[i];
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			chartohexa(j);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	chartohexa(int c_as_int)
{
	int		rem;
	int		div;
	char	c;

	rem = c_as_int %16;
	div = c_as_int /16;
	if (div != 0)
		chartohexa(div);
	if (rem < 10)
		c = rem +'0';
	else
		c = 'a' + (rem -10);
	write(1, &c, 1);
}
