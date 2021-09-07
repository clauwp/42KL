#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str);
char    *ft_strdup(char *src);

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*retarr;
	struct s_stock_str	*copy_retarr;

	retarr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (retarr != NULL)
	{
		copy_retarr = retarr;
		while (ac > 0)
		{
			(*copy_retarr).copy = ft_strdup(* av);
			(*copy_retarr).str  = *av;
			(*copy_retarr).size = ft_strlen(* av);
			copy_retarr++;
			av++;
			ac--;
		}
		(*copy_retarr).str  = 0;
	}
	return (retarr);
}

char	*ft_strdup(char *src)
{
	char	*copy_s;
	int		srclen;

	srclen = ft_strlen(src);
	copy_s = (char *) malloc(sizeof(copy_s) * (srclen + 1));
	while (*src)
	{
		*copy_s = *src;
		copy_s++;
		src++;
	}
	*copy_s = '\0';
	return (copy_s - srclen);
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
