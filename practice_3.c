#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void switches(){
    int dayofweek = 0;
    //char dayofweek = '\0';  switches are also efficient while using chars
    printf("choose a number between 1 to 7 for day display: \n");

    scanf("%d", &dayofweek);

    switch(dayofweek){
        case 1:
            printf("It is monday");
            break;
        case 2:
            printf("it is tuesday");
            break;
        case 3:
            printf("it is wednesday");
            break;//break is important because if we dont put it will print all the previous cases.
            //eg if we set dayofweek = 4, it willprint monday tuesday wednesday
        case 4:
            printf("it is thursday");
            break;
        case 5:
            printf("it is friday");
            break;
        case 6:
            printf("it is saturday");
            break;
        case 7:
            printf("it is sunday");
            break;
        default://default case if for if somehting doesnt match
            printf("Chose a number from 1-7");
    }
}
void nested_if_statements(){
    float price = 10.00;
    bool isStudent = false;
    bool isSenior =false;

    if(isStudent){
        if(isSenior){
            price*=0.7;
            printf("Person is student and senior");
        }
        else {
            price*=.9;
            printf("Person is only student");
        }

    }
    else if(isSenior){
        price*=0.8;
        printf("Person is only senior");
    }
    else{
        
        printf("Person in neither student nor senior");
    }


    printf("%.2lf",price);

}

void logical_operators(){
    //used to combine or modify boolean operators
    // && =  and;
    // || = Or;
    // ! = not;
}
void function_birthday(char name[], int age){
    //reusable sectionof code that can be called
    printf("Happy birthday dear %s!\n", name);
    printf("Your are %d years old!\n", age);

    
}


//return usage
int return_square(int num){
    return num*num;   
}

double cube(double num){
    return num*num*num;
}

int getmax(int x, int y){
    if (x >=y){
        return x;
    }
    else{
        return y;
    }
}
int main(){

    //fucitons
    char name[20] = "";
    int age = 0;
    printf("Enter your name: ");

    fgets(name,sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("enter your age: ");
    scanf("%d", &age);
    function_birthday(name, age);


    //return: basically function er end result ta pull kore
    //return  0 , always at the end of main funciton

    int x = return_square(2);
    int y = return_square(3);
    int z = return_square(4);

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);


    int f = cube(3.2);
    printf("%.2f\n", f);


    int max = getmax(2,3);
    printf("%d", max);


    //switches();
    nested_if_statements();
}