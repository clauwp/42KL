#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	len;

	len = ft_strlen(argv[0]);
	argc = 0;
	write(1, argv[0], len);
	write(1, "\n", 1);
}
