#include<stdio.h>
#include<stdlib.h>

void blanker(char gamma[]);
void print_board(char board[]);

int main(void){
        char demoboard[9] = {'','','','','','','','',''};
        char board[9];
        int i;
        int z=1;
        
        
        while (z==1)     
        for(i=0;i<9;i++){
                if (delta == 0){
                print_board(board);
                
                ++delta;
                continue;
                }else if(delta ==1){
                /*do the other stuff*/
                --delta;
                continue;
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
