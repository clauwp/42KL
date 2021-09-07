#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char s[] = "hello WoRld 78^!$";
	printf("ori string before running function: %s\n", s);
	char	*pr =ft_strupcase(s);
	printf("ori string after running function: %s\n", s);
	printf("returned string: %s\n", pr);
}
