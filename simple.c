void simple(char board[], char j){
        if(board[0] != ' '){
                board[0] = j;
        }else if(board[2] != ' '){
                board[2] = j;
        }else if(board[6] != ' '){
                board[6] = j;
        }else if(board[8] != ' '){
                board[8] = j;
        }else if(board[4] != ' '){
                board[4] = j;
        }else if(board[3] != ' '){
                board[3] = j;
        }else if(board[5] != ' '){
                board[5] = j;
        }else if(board[1] != ' '){
                board[1] = j;
        }else if(board[7] != ' '){
                board[7] = j;
        }else{
                return
        }
}
