int win_chance(char board[], char j){
        int i;
        
        for(i=0;i<3;i++){
        if(board[i]!=' '){
                if(board[i]==board[i+1]{
                if(board[i]==' '){
                        board[i+2]=j;
                        }
                }
        }//checks for wins in c3
      
        if(board[i]!=' '){
                if(board[i]==board[i+2]{
                if(board[i]==' '){
                        board[i+1]=j;
                        }
                }
        }//checks for wins in c2
        
        if(board[i+1]!=' '){
                if(board[i+1]==board[i+2]{
                        if(board[i]==' '){
                        board[i]=j;
                        }
                }
        }//checks for wins in c1
}
        // break
        for(i=0;i<9;i+=3){
        if(board[i]!=' '){
                if(board[i]==board[i+3]{
                        if(board[i]==' '){
                        board[i+2]=j;
                        }
                }
        }//checks for wins in r3
    
        if(board[i]!=' '){
                if(board[i]==board[i+2]{
                        if(board[i]==' '){ 
                        board[i+1]=j;
                        }
                }
        }//checks for wins in r2
        
        if(board[i+1]!=' '){
                if(board[i+1]==board[i+2]{
                        if(board[i]==' '){ 
                        board[i]=j;
                }
        }//checks for wins in r1
        }
        }
        for(i=0;i<3;i+=2){
                if(board[i]!=' '){
                        if(board[i]==board[i+2]){
                                if(' '==board[i+4]){
                                board[i+4] = j;
                                }
                        }
                
                } // checks diagonal wins
                if(board[i+2]!=' '){
                        if(board[i+4]==board[i+2]){
                                if(' '==board[i]){
                                board[i+4] = j;
                                }
                        }
                }
                if(board[i+4]!=' '){
                        if(board[i+4]==board[i]){
                                if(' '==board[i]){
                                board[i+2] = j;
                                }
                        }
                }
}
