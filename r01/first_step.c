void  	clue_N(int ans_arr[], int i, int N);

void  	clue_N_(int ans_arr[], int i, int N);

void  	clue_1(int ans_arr[], int i, int N);

void  	first_step(int clue_arr[], int ans_arr[], int N)
{
	int i;

	i = 0;
	while (i < N *4)
	{
		if (clue_arr[i] == N)
		{
			clue_N(ans_arr, i, N);
		}
		else if (clue_arr[i] == 1)
		{
			clue_1(ans_arr, i, N);
		}
		i++;
	}
}

void	clue_N(int ans_arr[], int i, int N)
{
	int j;

	j = 0;
	if (i >= 0 && i < 4) 
	{
		while (j < 4)
		{
			ans_arr[i + j + N * i] = j + 1;
			j++;
		}
	}
	else if (i >= 8 && i <12)
	{
		while (j < 4)
		{
			ans_arr[1 + j + N * i] = j +1;
			j++;
		}
	}
	else
	{
		clue_N_(ans_arr, i, N);
	}
}

void	clue_N_(int ans_arr[], int i, int N)
{
	int j;
	
	j = N - 1;
	if (i >= 4 && i < 8)
	{
		while (j >= 0)
		{
			ans_arr[1 + i + N *j] = N - j;
			j--;
		}
	}
	else
	{
		j = N - 1;
		while (j >= 0)
		{
			ans_arr[1 + j + N * i] = N - j;
			j--;
		}
	}
}

void 	clue_1(int ans_arr[], int i, int N)
{
	int j;

	j = N - 1;
	if (i >= 0 && i < 4)
	{	
		ans_arr[1 + i] = N;
	}
	else if (i >= 4 && i < 8)
	{
		ans_arr[1 + i + N * j] = N;
	}
	else if (i >= 8 && i < 12)
	{
		ans_arr[1 + N * i] = N;
	}
	else
	{
		ans_arr[1 + j + N * i] = N;
	}

}
