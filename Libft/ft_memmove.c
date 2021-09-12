#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    char *temp;

    temp = (char *)dst;
	while (n > 0)
	{		
		src++;
		dst++;
		n--;
	}
    return (temp);
}