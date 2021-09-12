#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *retstr;
    int  i;
    int  j;
    int  k;

    i = 0;
    retstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (retstr != NULL)
    {
        while (s1[i])
        {
            j = 0;
            while (set[j] == s1[i + j])
            {
                if (set[j + 1])
                    i = i + j;
                j++;
            }
            retstr[k] = s1[i];
            k++;
            i++;
        }
    }
    return (retstr);
}