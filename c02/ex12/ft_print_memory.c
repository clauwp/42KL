#include <unistd.h>
#include <stdio.h>

void    print_addr(unsigned long int addr, int n);
void	print_hexchar(unsigned char *addr);
void	print_char(unsigned char *addr);
void    ft_hexval(unsigned int addr);

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	void			*copy_addr;

	copy_addr = addr;
	i = 0;
	while (i < size)
	{
		print_addr((unsigned long int) addr, 16);
		write(1, ": ", 2);
		print_hexchar((unsigned char *)addr);
		write(1, " ", 1);
		print_char((unsigned char *) addr);
		write(1, "\n", 1);
		addr += 16;
		i += 16;
	}
	return (copy_addr);
}

void	print_addr(unsigned long int addr, int	n)
{
	char c;

	if (n > 0)
		print_addr(addr / 16, n -1);
	addr %= 16;
	if (addr > 9)
		c = addr - 10 + 'a';
	else
		c = addr + '0';
	write(1, &c, 1);
}

void	print_hexchar(unsigned char *addr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (*addr != 0)
		{
			if ((int)*addr < 16)
				write(1, "0", 1);
			ft_hexval((unsigned int) *addr);
		}
		else if (i % 16 != 0)
			write(1, "  ", 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		addr++;
		i++;
	}
}

void	print_char(unsigned char *addr)
{
	int	i;

	i = 0;
	while (i < 16 && *addr)
	{
		if ((*addr >= 0 && *addr <32) || *addr ==127)
			write(1, ".", 1);
		else
			write(1, addr, 1);
		addr++;
		i++;
	}
}

void	ft_hexval(unsigned int addr)
{
	unsigned char	c;

	if (addr / 16 != 0)
		ft_hexval(addr / 16);
	addr %= 16;
	if (addr >= 10)
		c = addr - 10 + 'a';
	else
		c = addr + '0';
	write(1, &c , 1);
}
