#include <stdlib.h>

/*
 * concatenate all the strings pointed by strs separated by sep
 * size is the number of strings in strs
 * if size is 0, it should a freeable empty string
 */

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_totallen(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*retstr;
	int		total_strlen;
	int		i;

	i = 0;
	if (size > 0)
	{
		total_strlen = ft_totallen(size, strs, sep);
		retstr = (char *) malloc(sizeof(*retstr) * (total_strlen +1));
	}
	else
	{
		retstr = (char *) malloc(sizeof(*retstr) * 1);
		*retstr = 0;
		return (retstr);
	}
	//retstr = NULL;
	while (i < size -1)
	{
		retstr = ft_strcat(retstr, strs[i]);
		retstr = ft_strcat(retstr, sep);
		i++;
	}
	retstr = ft_strcat(retstr, strs[i]);
	return (retstr);
}

int	ft_totallen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[destlen + i] = src [i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
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
