#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr = "  -+--111";
	char *ori_base = "0123456789";
	char *base_to = "abcdefghij";
	char	*retstr = ft_convert_base(nbr,ori_base,base_to);
	printf("%s\n", retstr);
}
