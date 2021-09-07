int finduniq(int ***board, int row, int col);

int occurence(int ***board, int row, int col, int digit);

void    replace(int ***board, int row, int col, int digit);

void    eliminate(int  ***board)
{
    int row;
    int col;
    int uniq;
    
    while (board[row] != '\0') //finds by row
    {
        col = 0;
        uniq = finduniq(board, row, col);
        if (uniq != 0)
            replace(board, row, col, uniq)
        row++;
    }
    while (board[row][col] != '\0') //finds by column
    {
        row = 0;
        uniq = finduniq(board, row, col)
        if (uniq != 0)
            replace(board, row, col, uniq);
        col++;
    }
}

int finduniq(int ***board, int row, int col) //by looping through each cell accross row/col
{
    int digit;
    int count;

    digit = 1;
    while (i <= 4)
    {
        count = occurence(board, row, col, digit);
        if (count == 1)
        {
            return (i);
        }
    }
    return (0);
}

int occurence(int ***board, int row, int col, int digit) //looping through array in cell 
{
    int i = 0;
    int count;

    count = 0;
    while (i < 4)
    {
        while (board[row][col] != '\0')
        {
            if (*board[row][col] == digit)
            {
                count++;
            }
            board[row][col]++;
        }
        i++;   
    }
    if (count == 1)
    {
        return (count);
    }
    return (0);
}

void    replace(int ***board, int row, int col, int digit)
{
    int index;
    int i;

    while (i < 4)
    {
        while (board[i][col] != '\0')
        {
            if (board[i][col] == digit)
            {
                index = i;
                i =4;
            }
            board[i][col]++;
        }
        i++;   
    }
    while (board[i][col] != '\0')
    {
        board[i][col][index] = 0;
        board[i][col][index]++;
    }
    board[i][col][0] = digit;
}
