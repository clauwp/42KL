#include <unistd.h>

int		isValid(int board[10][10], int row, int col);
int		isValid_diag(int board[10][10], int row, int col);
int		ft_solve(int board[10][10], int col, int sol);
void	ft_print_sol(int board[10][10]);

int	ft_ten_queens_puzzle(void)
{
	int	row;
	int	col;
	int	count_sol;
	int	board[10][10];

	col = 0;
	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			board[row][col] = -1;
			row++;
		}
		col++;
	}
	count_sol = ft_solve(board, 0, 0);
	return (count_sol);
}

int	ft_solve(int board[10][10], int col, int sol)
{
	int	row;

	row = 0;
	if (col > 9)
	{
		ft_print_sol(board);
		sol++;
		return (sol);
	}
	while (row < 10)
	{
		if (isValid(board, row, col))
		{
			board[row][col] = row;
			sol = ft_solve(board, col +1, sol);
			board[row][col] = -1;
		}
		row++;
	}
	return (sol);
}

int	isValid(int	bd[10][10], int row, int col)
{
	int	c;
	int	r;

	r = 0;
	c = 0;
	while (r < 10 && c < 10)
	{
		if (r != row && bd[r][col] != -1)
			return (0);
		if (c != col && bd[row][c] != -1)
			return (0);
		r++;
		c++;
	}
	if (!isValid_diag(bd, row, col))
		return (0);
	return (1);
}

int	isValid_diag(int board[10][10], int row, int col)
{
	int	c;
	int	r;

	c = 0;
	while (c < 10)
	{
		r = 0;
		while (r < 10)
		{
			if (r != row && (c - r == col - row || c + r == row +col))
				if (board[r][c] != -1)
					return (0);
			r++;
		}
		c++;
	}
	return (1);
}

void	ft_print_sol(int board[10][10])
{
	int		row;
	int		col;
	char	printchar;

	col = 0;
	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			if (board[row][col] != -1)
			{
				printchar = board[row][col] + '0';
				write(1, &printchar, 1);
			}
			row++;
		}
		col++;
	}
	write(1, "\n", 1);
}
