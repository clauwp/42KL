void  first_step(int clue_arr[], int ans_arr[], int N);

void  edge_clue(int clue_arr[], int *line_board[], int N);

void    method_1(int *line_board[], int ans_arr, int clue_arr, int N)

{
	first_step(clue_arr, ans_arr, N);
	
	edge_clue(clue_arr, line_board, N);
}
