#include <unistd.h>

void	print(int ans_arr[]);

void	init_answer()
{
	int i;
	int ans_arr[16];

	i = 0;
	while (i < 16)
	{
		ans_arr[i] = 0;
		i++;
	}
}

void	check_ans(int ans_arr[], int N)
{
	int i;
	int count;

	while (i < 16)
	{
		if (ans_arr[i] > 0 && ans_arr[i] <= N)
		{
			count++;
		}
		i++;
	}
	if (count == 16)
	{
		print(ans_arr);
	}
}

void	print(int ans_arr[])
{
	int i;
	int j;
	char a;

	i = 0;
	j = 1;
	while (j <= 4)
	{
		while(i < 4 * j)
		{
			a = ans_arr[i] + '0';
			write(1, &a, 1);
			write(1, ' ', 1);

		}
		write(1, '\n', 1);
	}
}
