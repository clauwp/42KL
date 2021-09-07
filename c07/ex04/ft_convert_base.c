#include <stdlib.h>

int		ft_base(char *s);
int		ft_atoi_base(char *nbr, char *base);
int		findlen(int nbr, int base);
void	convert(int nbr, char *to_base, char *retstr, int count);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_base10;
	char	*retstr;
	int		count;

	if (ft_base(base_to) >= 2 && ft_base(base_from) >= 2)
	{
		nbr_base10 = ft_atoi_base(nbr, base_from);
		count = findlen(nbr_base10, ft_base(base_to));
		retstr = (char *)malloc(sizeof(char) * (count +2));
		if (retstr != NULL)
		{
			if (nbr_base10 < 0)
			{
				count++;
				retstr[0] = '-';
			}
			convert(nbr_base10, base_to, retstr, count);
		}
		return (retstr);
	}
	return (NULL);
}

void	convert(int nbr, char *to_base, char *retstr, int count)
{
	int	index;
	int	base;

	base = ft_base(to_base);
	while (nbr != 0)
	{
		index = nbr % base;
		if (nbr < 0)
			index = -index;
		retstr[count -1] = to_base[index];
		nbr = nbr /base;
		count--;
	}
}

int	findlen(int nbr, int base)
{
	int	count;

	count = 0;
	while (nbr != 0)
	{
		nbr = nbr / base;
		count++;
	}
	return (count);
}

int	ft_base(char *s)
{
	int		count;
	char	*temp;

	count =0;
	while (*s != '\0')
	{
		temp = s +1;
		while (*temp != '\0')
		{
			if (*s == '-' || *s == '+' || *s == *temp)
			{
				return (0);
			}
			temp++;
		}
		count++;
		s++;
	}
	return (count);
}
