#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
	char	*s1 = "i";
	char	*s2 = "want";
	char	*s3 = "to";
	char	*s4 = "sleep!";
	char	*strs[4]= {s1, s2, s3, s4};


	struct s_stock_str *stocks =ft_strs_to_tab(4, strs);
	ft_show_tab(stocks);
}
