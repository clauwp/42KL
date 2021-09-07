#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_display(int argc, char **argv);

int	main(int argc, char **argv)
{
	char	*ptr;
	int		i;
	int		j;

	i = 1;
	while (i < argc -1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j +1]) > 0)
			{
				ptr = argv[j];
				argv[j] = argv[j +1];
				argv[j +1] = ptr;
			}
			j++;
		}
		i++;
	}
	ft_display(argc, argv);
}

void	ft_display(int argc, char **argv)
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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
