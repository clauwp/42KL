#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	strlen;

	while (argc -1 > 0)
	{
		strlen = ft_strlen(argv[argc -1]);
		write(1, argv[argc -1], strlen);
		write(1, "\n", 1);
		argc--;
	}
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
