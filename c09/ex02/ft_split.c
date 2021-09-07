#include <stdlib.h>

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

char	*ft_strdup(char *first, char *last)
{
	char	*copy_s;
	int		strlen;

	strlen = last - first;
	copy_s = (char *) malloc(sizeof(*copy_s) * (strlen + 1));
	if (copy_s != NULL)
	{
		while (first != last)
		{
			*copy_s = *first;
			copy_s++;
			first++;
		}
		*copy_s = '\0';
		return (copy_s - strlen);
	}
	return (NULL);
}

int	checksep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (charset[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	*first;
	char	*last;
	char	**retstr;
	char	**copy_retstr;

	retstr = (char **)malloc(sizeof(char *) * ft_strlen(str));
	copy_retstr = retstr;
	first = str;
	while (*str)
	{
		while (checksep(*str, charset) == 0 && *str != 0)
			str++;
		last = str;
		if (first != last)
		{
			*retstr = ft_strdup(first, last);
			retstr++;
		}
		while (checksep(*str, charset) != 0 && *str != 0)
			str++;
		first = str;
	}
	*retstr = 0;
	return (copy_retstr);
}
