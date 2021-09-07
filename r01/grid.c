#include <stdio.h>
#include <unistd.h>

void	board(int *input)
{
	int 	row;
	int		col;
	int 	board[4][4];

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;

		}
		row++;
	}
}

void	line_grid(void)
{
	int i;
	int *line_board[16];

	i = 0;
	while(i < 16)
	{
		*line_board[i] = [1, 2, 3, 4];
		i++;
	}
}

int		convert(int *line_board, int board)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(j < 4)
	{
		i = 0;
		while(i < 4)
		{
			board[i][j] = *line_board[(i + 1) + (j * 4)]
				i++;
		}
		j++;
	}
	return board;
}
