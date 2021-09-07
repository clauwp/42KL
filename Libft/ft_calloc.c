#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *retval;
    char     *temp;

    retval = malloc(size * count);
    if (retval != NULL)
    {
        temp = retval;
        while (count > 0)
        {
            *temp = 0;
            count--;
            temp++;
        }
        return (retval);
    }
    else
        return (NULL);
}