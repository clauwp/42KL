int noDuplicateCol(int ***board, int row, int col);

int noDuplicateRow(int ***board, int row, int col);

int getclue(int row, int col, int loop, int arr[]);

int colIsSafe(int clue, int row, int val, int loop);

int rowIsSafe(int clue, int col, int val, int loop);

int isValid(int ***board, int clue_arr[], int val, int cellNum);

int solve_2(int ***board, int clue_arr, int cellNum)
{
    if (noDuplicate(board) && fulfilled(board, clue_arr)
    {
        return (1);
    }

    row = cellNum % 4;
    col = cellNum / 4;
    val = 1;
    cell_len =arr_len(board[row][col]);
    while (cell_len > 0)
    {
        val = board[row][col][cell_len - 1]
        ori_copy = board[row][col];
        if (isValid(board, clue_arr, val, cellNum) && noDuplicate(row,col))
        {
            board[row][col][3] = val; 
            if (solve_2(board, clue_arr, cellNum + 1) && noDuplicate(row,col))
                return (1);
            board[row][col] = ori_copy
        }
        cell_len--;
    }
}

int isValid(int ***board, int clue_arr[], int val, int cellNum)
{
    int safecount;
    int loop;
    int row;
    int col;

    row = cellNum % 4;
    col = cellNum / 4;
    while (loop < 4) //each loop go through one clue (one cell has 4 clues)
    {
        clue = getclue(row, col, loop, clue_arr);
        if (loop == 0 || loop == 2)
        {
            safecount +=colIsSafe(board, clue, row, col, val, loop);
        }
        else if (loop == 1 || loop == 3)
        {
            safecount +=rowIsSafe(board, clue, row, col, val,loop);
        }
        loop++;
    }
    if (safecount == 4)
        return (1);
    return (0);
}

int rowIsSafe(int clue, int col, int val, int loop)
{
    if (loop == 0)
    {
        if ((4 - clue + 2 + col) <= val)
        {
            return (0);
        }
    }
    else if (loop ==2)
    {
        if ((4 - clue + 2 + ( - (col - 3))) <= val)
        {
            return (0);
        }
    }
    return (1);
}


int colIsSafe(int clue, int row, int val, int loop)
{
  if (loop == 1)
    {
        if ((4 - clue + 2 + row) <= val)
        {
            return (0);
        }
    }
    else if (loop ==3)
    {
        if ((4 - clue + 2 + ( - (row - 3))) <= val)
        {
            return (0);
        }
    }
    return (1);
}

int getclue(int row, int col, int loop, int arr[])
{
   if (loop == 0) //get top clue
   {
       index = col;
   }
   else if (loop == 1) //get bottom clue          
   {
       index = col + 4;
   }
   else if (loop == 2) //get left clue
   {
       index = row + 8;
   }
   else if (loop == 3) //get right clue
   {
       index = row + 12
   }
   return (arr[index]);
}

int noDuplicateRow(int ***board, int row, int col)
{
    int val = * board[row][col];
    int count =0;
    
    // go through entire row
    while (*board[row] != '\0')
    {
        while (**board[row] != '\0')
        {
            if (**board[row] == val)
            {
                count++;
            }
            *board[row]++;
        }
        board[row]++;
    }
    if (count > 1)
    {
        return (0);
    }
}

int noDuplicateCol(int ***board, int row, int col)
{
    int val = *board[row][col];
    int count =0;
    //go through entire column
    while (board[row][col] != '\0')
    {
        while (*board[row][col] != '\0')
        {
            if (*board[row][col] == val)
            {
                count++;
            }
            *board[row][col]++;
        }
        row++;
    }
}