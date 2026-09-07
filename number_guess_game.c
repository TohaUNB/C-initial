//number guessing game;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    srand(time(NULL));
    int min = 1;
    int max = 100;
    int choice = 0;
    int choice_count = 0;

    int randomNum = (rand() % (max - min + 1)) + min;
    printf("%d", randomNum);
    printf("choose a number between 1 and 100: ");
    

    
    do{
        printf("choose a number between 1 and 100: ");
        scanf("%d", &choice);
        choice_count++;
        if(choice > randomNum){
            printf("too high. choose lower: ");
        }
        else if(choice < randomNum){
            printf("too low. choose higher: ");
        }        
        else{//for some reason if i dont put this else, then 
            printf("correct");
        }
        
        
    }while(choice != randomNum);

    printf("Matches. random number is %d", randomNum);
    printf("tries needed %d", choice_count);

    return 0;
    //can be done easily with just a while loop
}