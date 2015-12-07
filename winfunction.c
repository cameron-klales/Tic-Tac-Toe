int winner_found(char board[], int player, int moves){

if((board[0] != ' ') && (board[0] == board[1])&&(board[0] == board[2]))
        return player; //Player Won!
else if((board[3] != ' ') && (board[3] == board[4])&&(board[3] == board[5]))
        return player; //Player Won!
else if((board[6] != ' ') && (board[6] == board[7])&&(board[6] == board[8]))
        return player; //Player Won!
else if((board[0] != ' ') && (board[0] == board[4])&&(board[0] == board[8]))
        return player; //Player Won!
else if((board[2] != ' ') && (board[2] == board[4])&&(board[2] == board[6]))
        return player; //Player Won!
else if((board[0] != ' ') && (board[0] == board[3])&&(board[3] == board[6]))
        return player;
else if((board[1] != ' ') && (board[1] == board[4])&&(board[4] == board[7]))
        return player;
else if((board[2] != ' ') && (board[2] == board[5])&&(board[5] == board[8]))
        return player;
else if (moves == BOARD_SIZE)
        return DRAW;
else
        return 0; //Noone has won yet
}
