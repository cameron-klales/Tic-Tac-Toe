#include<stdio.h>
#include<stdlib.h>

void blanker(char gamma[]);
void print_board(char board[]);
int determine_order(char xo[]);
int winner_found(char board[]);
int win_chance(char board[], char j)

int main(void){
        char demoboard[9] = {'1','2','3','4','5','6','7','8','9'};
        char board[9];
        char games[2];
        int i;
        int z=1;
        int delta = determine_order(games);
       
        
        while (z==1){     
        for(i=0;i<9;i++){
                if (delta == 0){
                        print_board(board);
                        implement user move;
                                if (1==winner_found(board){
                                print_board(board);
                                i = 9; 
                                continue;
                                }
                }
                ++delta;
                continue;
                }else if(delta ==1){
                        win_chance(board, game[1]);
                --delta;
                continue;
        }
}
}
void blanker(char gamma[]){
        int i;
        for(i=0;i<9;i++){
                gamma[i]=' ';
        }
}
void print_board(char board[]){

        puts("");
        printf(" %c | %c | %c \n",board[0],board[1],board[2]);// prints array values to the board
        puts("-----------");
        printf(" %c | %c | %c \n",board[3],board[4],board[5]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[6],board[7],board[8]);
return;
}
int determine_order(char xo[]){
        char z;

        while(1){
        puts("What letter would you like to play as?(choose x or o");
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
                continue; // Loop ensures user input is valid. Once the user has given valid input, sets and returns z to capital x or o.
                        }
                }
}
