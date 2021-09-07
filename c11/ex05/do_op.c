#include "ft.h"
#include <unistd.h>

int	identify_op(char *str);

int	main(int argc, char**argv)
{
	int		num1;
	int		num2;
	int		op_index;
	void	(*func_arr[5])(int, int);

	func_arr[0] = add;
	func_arr[1] = subtract;
	func_arr[2] = multiply;
	func_arr[3] = divide;
	func_arr[4] = modulo;
	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	op_index = identify_op(argv[2]);
	if (op_index == -1)
		write(1, "0", 1);
	else
		(*func_arr[op_index])(num1, num2);
	write(1, "\n", 1);
}

int	identify_op(char *str)
{
	if (str[1] != '\0')
		return (-1);
	if (*str == '+')
		return (0);
	else if (*str == '-')
		return (1);
	else if (*str == '*')
		return (2);
	else if (*str == '/')
		return (3);
	else if (*str == '%')
		return (4);
	else
		return (-1);
}
