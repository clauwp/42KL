#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str != 0)
	{
		ft_putstr((*par).str);
		ft_putchar('\n');
		ft_putnbr((*par).size);
		ft_putchar('\n');
		ft_putstr((*par).copy);
		ft_putchar('\n');
		par++;
	}
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb / 10 != 0)
		ft_putnbr(nb /10);
	c = (nb % 10) + '0';
	ft_putchar(c);
}
