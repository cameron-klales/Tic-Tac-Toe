int win_chance(char board[])
{
        if ((board[0] != ' ') && (board[0] == board[1]))
                return 2+1;
        else if((board[1] != ' ') && (board[1] == board[2]))
                return 0+1;
        else if((board[3] != ' ') && (board[3] == board[4]))
                return 5+1;
        else if((board[6] != ' ') && (board[6] == board[7]))
                return 8+1;
        else if((board[7] != ' ') && (board[7] == board[8]))
                return 6+1;
        else if((board[0] != ' ') && (board[0] == board[4]))
                return 8+1;
        else if((board[2] != ' ') && (board[2] == board[4]))
                return 6+1;
        else if((board[6] != ' ') && (board[6] == board[4]))
                return 2+1;
        else if((board[8] != ' ') && (board[8] == board[4]))
                return 0+1;
        else
                return 0;
}
