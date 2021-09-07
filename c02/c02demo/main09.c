#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char s[] = "hi mY naME *is 3llA!\nHow_are~you?";
	printf("ori string before running function: %s\n", s);
	char	*pr =ft_strcapitalize(s);
	printf("%s\n", pr);
}
