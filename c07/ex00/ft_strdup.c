#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*copy_s;
	int		srclen;

	srclen = ft_strlen(src);
	copy_s = (char *) malloc(sizeof(copy_s) * (srclen + 1));
	if (copy_s != NULL)
	{
		while (*src)
		{
			*copy_s = *src;
			copy_s++;
			src++;
		}
		*copy_s = '\0';
		return (copy_s - srclen);
	}
	else
		return (NULL);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
