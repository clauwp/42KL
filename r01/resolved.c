void  resolved_rc(int *line_board[], int N, int i, int ans);

void  rem_resolved(int *line_board[], int ans, int N);

void  resolved(int *line_board[], int ans_arr[], int N)
{
	int i;

	i = 1;
	while(i <= N * N)
	{
		if (ans_arr[i] > 0 && ans_arr[i] < N)
		{
			resolved_rc(line_board, N, i, ans_arr[i]);
		}
		i++;
	}
}

void  resolved_rc(int *line_board[], int N, int i, int ans)
{
	int j;
	int row;
	int col;

	j = 1;
	row = N - 1 / 4;
	col = N % 4;
	while (j <= N && j != (ans - 1) % 4)
	{
		rem_resolved(&line_board[row * N + j], ans, N);
		j++;
	}
	j = 1;
	while (j <= N && j != (i + 1) / 4)
	{
		rem_resolved(&line_board[col + N * j], ans, N);
		j++;
	}
}

void  rem_resolved(int *line_board[], int ans, int N)
{
	int element;

	element = 0;
	while (element < N)
	{
		if (*line_board[element] == ans)
		{
			*line_board[element] = 0;
		}
		element++;
	}
}













