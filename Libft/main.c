#include "libft.h"
#include <stdio.h>

int	main(void)
{
    char *str= "hello world :) how are you?";

    char *retstr =ft_substr(str, 5, 10);
    printf("return string: %s", retstr);
}
