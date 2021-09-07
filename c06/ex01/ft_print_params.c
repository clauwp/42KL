#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	strlen;

	i = 1;
	while (i < argc)
	{
		strlen = ft_strlen(argv[i]);
		write(1, argv[i], strlen);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count ++;
		str++;
	}
	return (count);
}
