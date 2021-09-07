#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char    *str ="0";
	char    *to_find = "p90";
	char    *result =ft_strstr(str, to_find);
	char	*target = strstr(str, to_find);
	
	printf("result= %s\n", result);
	printf("target= %s\n", target);
}
