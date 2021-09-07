#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(void)
{
	char	*s1 = "hello";
	char	*s2 = "world";
	char	*s3 = "piscine is fun";
	char	*strs[3]= {s1, s2, s3};

	/*
	*strs = s1;
	strs++;
	*strs = s2;
	strs++;
	*strs = s3;
	strs++;
	*strs = 0;
	*/
	ft_strs_to_tab(3, strs);
}
