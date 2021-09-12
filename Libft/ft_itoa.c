#include "libft.h"

static int  ft_findlen(int n)
{
    int count;

    count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    char    *retstr;
    int     i;
    int     len;

    len = ft_findlen(n);
    if (n >= 0)
        len--;
    retstr = (char*)malloc(siezof(*retstr) * (len + 1));
    if (retstr != NULL)
    {
        if (n < 0)
            retstr[0] = '-';
        retstr[len + 1] = 0;
        while (n != 0)
        {
            retstr[len] = (n % 10) + '0';
            n = n / 10;
            len--;
        }
        return (retstr);
    }
    else  
        return (NULL);
}