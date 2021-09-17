#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char    test_substr[50] = "hello (hidden) world";
    char    test_strjoin_s1[10] = "00000000";
    char    test_strjoin_s2[10] = "";
    char    test_strtrim_s1[20] = "Hello World0XD";
    char    test_strtrim_set[10] = "H0ello XD";
    int     fd;
    char    *fd_test;

    printf("ft_substr(%s) = %s\n", test_substr, ft_substr(test_substr, 50, 0));
    printf("ft_strjoin(%s,%s) = %s\n", test_strjoin_s1, test_strjoin_s2,\
     ft_strjoin(test_strjoin_s1,test_strjoin_s2));
    printf("ft_strtrim(%s,%s) = %s\n", test_strtrim_s1,test_strtrim_set, ft_strtrim(test_strtrim_s1,test_strtrim_set));
    printf("ft_itoa(%d) = %s\n", INT_MAX, ft_itoa(INT_MAX));
    fd = open("test_file.txt", O_RDWR);
    if (fd != -1)
    {
        ft_putstr_fd("HELLO", fd);
    }
}