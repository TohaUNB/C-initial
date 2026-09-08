//rock paper scissor game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//function prototypes
int getComputerChoice();
int getUserChoice();
void checkWinner(int userC, int computerC);


int main() {
    srand(time(NULL));
    printf("***ROCK PAPER SCISSORS***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    
    
    
    
    switch(userChoice){
        case 1:
            printf("Your chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSOR\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPER\n");
            break;
        case 3:
            printf("Computer chose SCISSOR\n");
            break;
    }

    checkWinner(userChoice, computerChoice);
    return 0;
}


int getComputerChoice(){
    return (rand() % (3 - 1 + 1)) + 1;


}

int getUserChoice(){
    
    int userChoice = 0;

    do{
        printf("Choose a number between 1-3: ");
        scanf("%d", &userChoice);
    } while(userChoice <  1 || userChoice >3); // important conditon check.
    //the condition means the loop will keep running as long as thenumbers less than 1 
    //numbers greater than 3 are given in by the user. since any other condition wouldnt keep
    //the loop running
    
    
    return userChoice;
}


void checkWinner(int userC, int computerC){
    if(userC == computerC){
        printf("it is a tie");
    }
    else if(userC == 1 && computerC == 3){
        printf("You win");
    }
    else if(userC == 3 && computerC == 1){
        printf("You lose");
    }
    else if(userC == 2 && computerC == 3){
        printf("You lose");
    }
    else if(userC == 3 && computerC == 2){
        printf("You win");
    }
    else if(userC == 1 && computerC == 2){
        printf("You lose");
    }
    else if(userC == 2 && computerC == 1){
        printf("You win");
    }
}
