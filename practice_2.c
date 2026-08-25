#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


void math_signs() {

    int x = 3.14;
    // x = sqrt(x);
    // x = pow(x, 4);
    // x = round(x);
    // x = ceil(x);
    // x = floor(x);
    // x = abs(x);
    // x = log(x);
    // x = sin(x);
    // x = cos(x);
    // x = tan(x);
    
    
    printf("%d", x);
    

}

void if_statements(){
    int age = 21;

    if(age >= 65){
        printf("You are an adult");

    }
    else if(age >= 18){
        printf("You are an adult");

    }
    else if(age == 0){
        printf("You are a newborn");
    }
    else{
        printf("You are a child");
    }

    
    
    int isStudent = true;

    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are not a student");
    }





    char name[50] = "";

    printf("Enter your name");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    if(strlen(name)==0){
        printf("You didnot enter your name");
    }
    else{
        printf("You are %s", name);
    }
}
int main() {
    math_signs();   
    if_statements();
    
    return 0;
}