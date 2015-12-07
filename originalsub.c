int main( void )
{
        int winner; //Flag for winner existence.
        char cpu_char, usr_char; //The characters used for the board game.
        char board[BOARD_SIZE]; //The array for gameplay
        int i; //placeholder index
        int turn; //Holds 0 if it is the cpu turn, 1 if it is the usr turn
        int total_moves;        //Keeps an increment of the number of moves of the game
        char y_or_n; //Holds gameplay status
        int is_playing = 1;
        int last_move;

        //Open the game
        //Call title graphic
        open_file("Titleimg.txt");
        //Give user instructions

        //Start game
        //Initialize variables
        while(is_playing){
        winner = 0;
        usr_char = determine_order();
        turn = 0;
        cpu_char = 'X';
        if(usr_char='X'){
                turn = 1; //For now the usr plays first
                cpu_char = 'O';
        }
        for (i=0;i<BOARD_SIZE;i++)
                board[i] = ' '; //Fill th board with spaces
        total_moves = 0; //Hey! The game just started so noone has moved yet!

        do
        {
                winner = winner_found(board,turn, total_moves);
                if(turn){//if(usr_turn)
                        print_board(board);
                        implement_user_move(board, usr_char);
                        //print_board(board);
                        total_moves++;
                        winner_found(board, PLAYER, total_moves);
                        turn = 0;
                }
                else{
                        computer_move(board, last_move, cpu_char);//Call cpu_input
                        winner_found(board, COMPUTER, total_moves);
                        print_board(board);
                        total_moves++;
                        turn = 1;
                }
                //The gameplay
        }while(!winner);

        if(winner == 1)
                open_file("playerimg.txt");
        else if (winner == 2)
                open_file("loserimg.txt");
                //Computer Won...
        else
                open_file("drawimg.txt");
                //Draw
        printf("Do you want to play again, y or n?");
        scanf("%c", &y_or_n);
        if(y_or_n == 'y' || y_or_n == 'Y')
                is_playing = 1;
        else
                is_playing = 0;

        printf("Goodbye!/n");

        return EXIT_SUCCESS;
}
}

void computer_move(char board[], int last_move, char computer_char){
        int x; //Placeholder
        //Check whether anyone is about to win
        if (x = win_chance(board)){
                printf("There's a win chance!/n");
                board[x-1] = computer_char;
                return;}
//First move
        if (board[0] == ' '){
                board[0] = computer_char;
                return;
        }
//Check the middle
        if (board[4] == ' '){
                board[4] = computer_char;
                return;
        }
//Do the opposite
        x = opposite(last_move);
        if (board[x] == ' '){
                board[x] = computer_char;
                return;
        }
//Otherwise pick a random number between 0 and 8
        x = rand() % 8;
        while (board[x] != ' '){
                x = rand() % 8;
                board[x] == computer_char;
        }
}

int opposite(int last_move)
{
        if (last_move == 0 || last_move == 3 || last_move == 6)
                return last_move + 2;
        else if (last_move == 2 || last_move == 5 || last_move == 8)
                return last_move - 2;
        else if (last_move == 1)
                return 7;
        else if (last_move == 7)
                return 1;
        else
                return 0;

}

int player_move(char board[], int location, char player_char){
        if (board[location] == ' '){
                board[location] = player_char;
                return 0;
        }
        else
                return 1;
}

/*Cases where someone is about to win*/
int winner_found(char board[], int player, int moves)
{

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

void print_board(char board[]){

        puts("");
        printf(" %c | %c | %c \n",board[0],board[1],board[2]);// prints array values to the board
        puts("-----------");
        printf(" %c | %c | %c \n",board[3],board[4],board[5]);
        puts("-----------");
        printf(" %c | %c | %c \n",board[6],board[7],board[8]);
return;
}



char determine_order(void){
        char z;

        while(1){
        puts("What letter would you like to play as?");
        scanf("%c", &z);

                        if(z == 'x' || z == 'X'){
                                z = 'X';
                                printf("You have chosen to play as %c", z);
                                return z;
                        }else if(z == 'O' || z == 'o'){
                                z = 'O';
                                printf("You have chosen to play as %c", z);
                                return z;
                        }else{
                puts("Your Input was not Valid. Try again");
                continue; // Loop ensures user input is valid. Once the user has given valid input, sets and returns z to capital x or o.
                        }
                }
}

int open_file(char *fname)
{
        char *filename = fname;
        FILE *fptr = NULL;

        if((fptr = fopen(filename,"r")) == NULL)
        {
                fprintf(stderr,"error opening %s\n", filename);
                return 1;
        }

        print_image(fptr);

        fclose(fptr);
        puts(""); /* makes a new line after the image*/
        return EXIT_SUCCESS;
}

void print_image(FILE *fptr){
        char read_string[MAX_LEN];

        while(fgets(read_string,sizeof(read_string),fptr) != NULL)
                printf("%s", read_string);
}
int getspace( void ){ // makes sure user input is valid
        int a;
        while (1){
                puts("Where would you like to move?");
                scanf("\n %d", &a);
                        if ( a<9 || a>1){
                                return a;
                        }else{
                                puts("try again");
                                continue;
                        }
                }
return 0;
}

void implement_user_move(char board[ ], char c){
        int bn; //boardspace number
        while(1){
                bn = getspace();
                --bn;
                if (board[bn] != ' '){ // checks that space is available
                        printf("%d is already claimed, try again.", bn + 1);
                        continue;
                }else{
                        printf("you have claimed %d\n",bn+1);
                        board[bn] = c; //sets space to player's character
                }       return;
                }
}
