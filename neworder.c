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
