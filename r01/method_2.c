eliminate(int  ***board);

int    convert(int *line_board, int **board)

void  resolved(int *line_board[], int ans_arr[], int N);

void    method_2(int *line_board[], int ans_arr, int clue_arr, int N)
{
	resolved(line_board, ans_arr, N);
	convert(line_board, board);
	eliminate(board);
}
