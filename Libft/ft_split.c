#include "libft.h"

char **ft_split(char const *s, char c)
{
    char    **retarray;
    char    *start;
    char    *end;

    retarray = (char **)malloc(sizeof(char*) * (ft_strlen(s) + 1));
    if (retarray != NULL)
    {
        while (*s)
        {
            start = s;
            while (*s != c && *s)
                s++;
            end = s;
            if (start != end)
                ft_strnew(start, end);
            s++;
        }
    }
}

static char *ft_strnew(char *start, char *end)
{
    char    *retstr;
    char    *copystart;
    char    *copyend;
    int     len;

    len = 0;
    copystart = start;
    copyend = end;
    while (*copystart++ != *copyend++)
        len++;
    retstr = (char *)malloc(sizeof(char) * (len + 1));
    if (retstr != NULL)
    {
        while (*start != *end)
        {
            *retstr++ = *start++;
        }
    }
}