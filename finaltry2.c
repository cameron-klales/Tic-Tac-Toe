#include<stdio.h>
#include<stdlib.h>

void blanker(char gamma[]);
void print_board(char board[]);
int determine_order(char xo[]);
int winner_found(char board[]);
int win_chance(char board[], char j);
void defaultmove(char board[], char j);
int player_move(char board[], char player_char);
int getspace(void);

int main(void){
        char demoboard[9] = {'1','2','3','4','5','6','7','8','9'};
        char board[9];
        char games[2];
        int i=0;
        int z=1;
        int delta = determine_order(games);
        int d;
        
     while (z==1){
        blanker(board);
        while(i<9){
                if (delta == 0){

                        print_board(board);
                        player_move(board, games[0]);
                        print_board(board);
                                if (1==winner_found(board)){
                                print_board(board);
                                break;
                                };
                        i++;
                        delta++;
                        continue;
                };
                
                if(delta ==1){
                        
                        d = win_chance(board, games[1]);
                        if(d!=0){
                                defaultmove(board, games[1]);
                        }if (1==winner_found(board)){
                                print_board(board);
                                break;
                        }
                delta--;
                continue;
                i++;        
                };
        }
        puts("(would you like to play again? (press 1 for yes and any other number for no)");
        scanf("%i\n", &z);
}
}
void blanker(char gamma[]){
        int i;
        for(i=0;i<9;i++){
                gamma[i]=' ';
        }
        return;
}
void print_board(char board[]){

        puts("");
        printf(" %c | %c | %c \n",board[0],board[1],board[2]);// prints array values to the b
oard
        puts("-----------");
        printf(" %c | %c | %c \n",board[3],board[4],board[5]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[6],board[7],board[8]);
return;
}
int determine_order(char xo[]){
        char z;

        while(1){
        puts("What letter would you like to play as?(choose x or o)");
        scanf("%c", &z);

                        if(z == 'x' || z == 'X'){
                                xo[0] = 'X';
                                xo[1] = 'O';
                              
                                printf("You have chosen to play as %c", z);
                                return 0;
                        }else if(z == 'O' || z == 'o'){
                                z = 'O';
                                printf("You have chosen to play as %c", z);
                                xo[0] = 'O';
                                xo[1] = 'X';
                                return 1;
                        }else{
                puts("Your Input was not Valid. Try again");
                continue; // Loop ensures user input is valid. Once the user has given valid 
input, sets and returns z to capital x or o.
                        }
                }
}
void defaultmove(char board[], char j){
        if(board[0] != ' '){
                board[0] = j;
        }else if(board[2] == ' '){
                board[2] = j;
        }else if(board[6] == ' '){
                board[6] = j;
        }else if(board[8] == ' '){
                board[8] = j;
        }else if(board[4] == ' '){
                board[4] = j;
        }else if(board[3] == ' '){
                board[3] = j;
        }else if(board[5] == ' '){
                board[5] = j;
        }else if(board[1] == ' '){
                board[1] = j;
        }else if(board[7] == ' '){
                board[7] = j;
        }else{
                return;
        }
}
int win_chance(char board[], char j){
        int i;
        
        for(i=0;i<3;i++){
        if(board[i]!=' '){
                if(board[i]==board[i+1]){
                if(board[i]==' '){
                        board[i+2]=j;
                        return 0;
                        }
                };
        };//checks for wins in c3
      
        if(board[i]!=' '){
                if(board[i]==board[i+2]){
                if(board[i]==' '){
                        board[i+1]=j;
                        return 0;
                        }
                };
        }//checks for wins in c2
        
        if(board[i+1]!=' '){
                if(board[i+1]==board[i+2]){
                        if(board[i]==' '){
                        board[i]=j;
                        return 0;
                        }
                }
        }//checks for wins in c1
};
        // break
        for(i=0;i<9;i+=3){
        if(board[i]!=' '){
                if(board[i]==board[i+3]){
                        if(board[i]==' '){
                        board[i+2]=j;
                        return 0;
                        }
                };
        }//checks for wins in r3
    
        if(board[i]!=' '){
                if(board[i]==board[i+2]){
                        if(board[i]==' '){ 
                        board[i+1]=j;
                        return 0;
                        }
                };
        };//checks for wins in r2
        
        if(board[i+1]!=' '){
                if(board[i+1]==board[i+2]){
                        if(board[i]==' '){ 
                        board[i]=j;
                        return 0;
                }
        }//checks for wins in r1
        }
        }
        for(i=0;i<3;i+=2){
                if(board[i]!=' '){
                        if(board[i]==board[i+2]){
                                if(' '==board[i+4]){
                                board[i+4] = j;
                                return 0;
                                }
                        }
                
                } // checks diagonal wins
                if(board[i+2]!=' '){
                        if(board[i+4]==board[i+2]){
                                if(' '==board[i]){
                                board[i+4] = j;
                                return 0;
                                }
                        }
                }
                if(board[i+4]!=' '){
                        if(board[i+4]==board[i]){
                                if(' '==board[i]){
                                board[i+2] = j;
                                return 0;
                                }
                        }
                }
        return 1;
}

int player_move(char board[], char player_char){
        int i;
        
        while (1){
        i = getspace();
        if (board[i] == ' '){
                board[i] = player_char;
                return 0;
        }
        }
}int getspace( void ){ // makes sure user input is valid
        int a;
        while (1){
                puts("Where would you like to move?");
                scanf("\n %d", &a);
                        if ( a<=9 || a>=1){
                                --a;
                                return a;
                        }else{
                                puts("try again");
                                continue;
                        }
                }
return 0;
}
}
int winner_found(char board[]){
        int i;
        for(i=0;i<9;i+=3){
                if(board[i]!=' '){
                        if (board[i]==board[i+1]){
                                if (board[i+2]==board[i+1]){
                                        printf("The Winner is %c",board[i]);
                                }
                        }
                }
        } // checks horizontal wins
        for(i=0;i<3;i+=2){
                if(board[i]!=' '){
                
                        if(board[i]==board[i+2]){
                                if(board[i+2]==board[i+4])
                                printf("The Winner is %c",board[i]);
                        }
                
        } // checks diagonal wins
        for(i=0;i<3;i++){
                if(board[i]!=' '){
                        if (board[i]==board[i+3]){
                                if (board[i+6]==board[i+3]){
                                        printf("The Winner is %c",board[i]);
                                }
                        }
                }
        };// checks vertical wins
        return;
}}
int player_move(char board[], char player_char){
        int i;
        
        while (1){
        i = getspace();
        if (board[i] == ' '){
                board[i] = player_char;
                return 0;
        }
        }
}int getspace( void ){ // makes sure user input is valid
        int a;
        while (1){
                puts("Where would you like to move?");
                scanf("\n %d", &a);
                        if ( a<10 || a>1){
                                return a;
                        }else{
                                puts("try again");
                                continue;
                        }
                }
return 0;
}
