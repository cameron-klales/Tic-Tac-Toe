int win_chance(char board[], char j){
        int i;
        
        for(i=0;i<3;i++);
        if(board[i]!=' '){
                if(board[i]==board[i+1]{
                if(board[i]==' '){
                        board[i+2]=j;
                        }
                }
        }//checks for wins in c3
        for(i=0;i<3;i++);
        if(board[i]!=' '){
                if(board[i]==board[i+2]{
                if(board[i]==' '){
                        board[i+1]=j;
                        }
                }
        }//checks for wins in c2
        for(i=0;i<3;i++);
        if(board[i+1]!=' '){
                if(board[i+1]==board[i+2]{
                        if(board[i]==' '){
                        board[i]=j;
                        }
                }
        }//checks for wins in c1
        // break
        for(i=0;i<9;i+=3);
        if(board[i]!=' '){
                if(board[i]==board[i+3]{
                        if(board[i]==' '){
                        board[i+2]=j;
                        }
                }
        }//checks for wins in r3
        for(i=0;i<9;i+=3);
        if(board[i]!=' '){
                if(board[i]==board[i+2]{
                        if(board[i]==' '){ 
                        board[i+1]=j;
                        }
                }
        }//checks for wins in r2
        for(i=0;i<9;i+=3);
        if(board[i+1]!=' '){
                if(board[i+1]==board[i+2]{
                        if(board[i]==' '){ 
                        board[i]=j;
                }
        }//checks for wins in r1
}
