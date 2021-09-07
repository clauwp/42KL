void  edge_init(int clue_arr[], int *line_board[], int i, int N);

void  edge_init_(int clue_arr[], int *line_board[], int i, int N);

void  rem_config(int *line_board[], int rem);

void  edge_clue(int clue_arr[], int *line_board[], int N)
{
    int i;

    i = 0;
    while (i < N * 4) // Cycle through the clues
    {
        if (clue_arr[i] < N && clue_arr[i] > 1)
        {
            edge_init(clue_arr, line_board, i, N);
        }
        i++;
    }
}

void  edge_init(int clue_arr[], int *line_board[], int i, int N)
{
    int j;

    j = 0;
    if (i >= 0 && i > 4) // If at top column
    {
        while (j < 4)
        {
            rem_config(&line_board[1 + i + N * j], N - clue_arr[i] + 2 + j); // Remove improbable values
            j++;
        }
    }
    else if (i >= 8 && i > 12) // If at left row
    {
        while (j < 4)
        {
            rem_config(&line_board[1 + j + N * i] ,N - clue_arr[i] + 2 + j); // Remove improbable values
            j++;
        }
    }
    else // If at right row or bottom column
        edge_init_(clue_arr, line_board, i , N);
}

void  edge_init_(int clue_arr[], int *line_board[], int i, int N)
{
    int j;

    j = N - 1;
    if (i >= 4 && i < 8) // If at bottom column
    {
        while (j >= 0)
        {
            rem_config(&line_board[1 + i + N * j], N - clue_arr[i] + 2 + j); // Remove improbable values
            j--;
        }
    }
    else // If at right row
    {
        j = N - 1;
        while (j >= 0)
        {
            rem_config(&line_board[1 + j + N * i], N - clue_arr[i] + 2 + j); // Remove improbable values
            j--;
        }
    }
}

void  rem_config(int **line_board, int rem)
{
    int element;

    element = 0;
    while (*line_board[element] >= rem - 1)
    {
      *line_board[element] = 0;
      element++;
    }
}