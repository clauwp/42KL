#include <unistd.h>

int		ft_base(char *s);
void	ft_printnum(int nbr, int base, char *s);
int		repeated(char *s);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_int;

	base_int =ft_base(base);
	if (base_int != 0)
	{
		if (nbr <0)
		{
			write(1, "-", 1);
		}
		ft_printnum(nbr, base_int, base);
	}
}

void	ft_printnum(int nbr, int base, char *s)
{
	char	c;
	int		n;

	if (nbr /base != 0)
		ft_printnum(nbr /base, base, s);
	n = nbr %base;
	if (n < 0)
		n = -n;
	c = s[n];
	write(1, &c, 1);
}

int	ft_base(char *s)
{
	int	count;

	count =0;
	while (*s != '\0')
	{
		if (*s == '-' || *s == '+' || repeated(s))
		{
			return (0);
		}
		count++;
		s++;
	}
	if (count < 2)
	{
		return (0);
	}
	return (count);
}

int	repeated(char *s)
{
	char	*temp;

	while (*s != '\0')
	{
		temp = s +1;
		while (*temp != '\0')
		{
			if (*temp == *s)
			{
				return (1);
			}
			temp++;
		}
		s++;
	}
	return (0);
}
