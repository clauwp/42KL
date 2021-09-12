#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *retstr;
    char    *copyretstr;

    retstr = (char *)malloc(sizeof(char) * (len + 1));
    if (retstr != NULL)
    {
        copyretstr = retstr;
        while (start-- > 0)
            s++;
        while (len-- > 0)
            *copyretstr++ = *s++;
        *copyretstr = 0;
        return (retstr);
    }
    else
        return (NULL);
}