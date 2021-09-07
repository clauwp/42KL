#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char    *str ="hello world!";
	char    *to_find = "xyz";
	char    *p =ft_strstr(str, to_find);
	
	printf("p= %s\n", p);
	printf("str= %s\n", str);
}
