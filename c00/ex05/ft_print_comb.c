#include <unistd.h>

void	ft_print(char ch[]);

void	ft_print_comb(void)
{
	char	ch[3];

	ch[0] = '0';
	ch[1] = '0';
	ch[2] = '0';
	while (ch[0] <= '7')
	{
		while (ch[1] <= '9')
		{
			while (ch[2] <= '9')
			{
				ft_print(ch);
				ch[2]++;
			}
			ch[2] ='0';
			ch[1]++;
		}
		ch[1] = '0';
		ch[0]++;
	}
}

void	ft_print(char ch[])
{
	if (ch[2] > ch[1] && ch[1] > ch[0])
	{
		write(1, &ch[0], 1);
		write(1, &ch[1], 1);
		write(1, &ch[2], 1);
		if (ch[0] == '7' && ch[1] == '8' && ch[2] == '9')
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}
