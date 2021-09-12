#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *retstr;
    char    *copyretstr;

    retstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (retstr != NULL)
    {
        while (*s1)
        {
            *retstr++ = *s1++;
        }
        while (*s2)
        {
            *retstr++ = *s2++;
        }
        *retstr = 0;
        return (copyretstr);
    }
    else
        return (NULL);
}