#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h> //sleep function for loop

//int result = 0; //global scope, hard to debug

void variable_scope(){
    //refers to where a variable is recognized and accesible
    //variables can share the same name if they are in different scopes

    int result = 0;
    // int result = 1; cant do this

}

int add(int x, int y){//forunderstanding scope
    int result = x+y;
    return result;
}



void hello(char name[], int age); //-------------function_prototype--------------
//means ifi write a secondary fucntion before main(), it  will give me error
//so i can just write the headline before so it works perfectly



void while_loop(){
    //continue some code while the condition of the code remains true
    //condition must be true for us to enter/start while loop
    //good for user input bc you are stuck in a loop until the condition becomes false

    int num = 0;
    int x = 0;

    while(num <= 0){
        printf("enter a number greater than 0\n");
        scanf("%d", &num);
    }

    do { //check conditn at the end rather at the beginning
        printf("enter a number greater than 0\n");
        scanf("%d", &x);
    }while(x <= 0);



    
}

void while_example2(){
    char name[50] = "";
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name)==0){
        printf("name cannot be empty, plese enter your name");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';

    }

    printf("hello %s", name);
}

void while_example3(){
    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("you are playing a game\n");
        printf("would you like to continue? y = yes, n = no:  ");
        scanf(" %c", &response); // the extra space before c is to clear the input buffer

        if(response != 'n' || response != 'N'){
            isRunning = false;
        }
    }
    printf("you exit the game");
}

void for_loop(){
    // repeat some code a limited number of times
    // for(initialization: condition: update)

    for(int i = 0; i <100; i+=2){
        Sleep(1000); //program is going to sleep for exactly 1 second in between
        printf("%d\n", i);
    }
    printf("happy new year!!");
}

void break_continue(){
    //break = break out of a loop anywhere(STOP)
    //continue = skip current cycle of a loop (SKIP)

    for(int i = 0; i <10; i+=1){
        if(i == 4){
            continue; // skips 4 only
        }
        printf("%d\n", i);
    }
}

void nested_loops1(){
    for (int i = 1; i < 4 ; i++){ // VVVIMP --------OUTER LOOP BASICALLY MEANS "THIS IS HOW MANY TIMES THE WHOLE INNER LOOP WILL RUN"----
        for(int j = 0; j <10; j+=1){
            printf("%d", j);
        }
        printf("\n");

    }
}

void nested_loops2(){//multiplication table
    for (int i = 1; i <=10; i++){
        for (int j = 1; j <= 10; j++){
            
            printf("%3d ",i*j);
        }
        printf("\n");
    }
}

void nested_loops3(){//rows cols

    int row = 0;
    int col = 0;
    
    char x = 'x';

    printf("enter the rows: ");
    scanf("%d", &row);
    printf("enter the cols: ");
    scanf("%d", &col);
    for (int i = 0; i <=row; i++){
        for (int j = 0; j <=col; j++){
            
            printf(" %c",x);
        }
        printf("\n");
    }
}

int main() {

    // int result = add(3, 4);
    // printf("%d", result);


    //while_loop();
    //while_example2();
    //while_example3();


    //for_loop();

    //break_continue();
    //nested_loops1();
    // nested_loops2();
    nested_loops3();
    //prototype

    //hello("spongebob", 30);

}

void random_number(){ // just a formula to get a random number between uppper and lower limits
    srand(time{NULL});

    int min = 50;
    int max = 100;

    int randomNum = (rand() % (max - min + 1)) + min;
}

void hello(char name[], int age){  //-----------function_prototype--------------
    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
}


