/*int winner_found(char board[]){
        int i;
        for(i=0,i<9,i+=3){
                if (board[i]==board[i+1]){
                        if (board[i+2]==board){
                                puts("Hwin");
                                break;
                        }
                }
        } // checks horizontal wins
        for(i=0,i<3,i+=2){
                if(board[i]==board[i+2]){
                        if(board[i+2]==board[i+4])
                        puts("dwin");
                }
        } // checks diagonal wins
        for(i=0,i<3,i++){
                if (board[i]==board[i+3]){
                        if (board[i+6]==board){
                                puts("Hwin");
                                break;
                        }
                }
        } // checks vertical wins
}
*/

#include<stdio.h>
#include<stdlib.h>

int winner_found(char board[]);
int main(void){
        int i;
        char gamma[9];
        for(i=0;i<9;i++){
                gamma[i]='a';
        }
        winner_found(gamma);
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
        }// checks vertical wins
}
