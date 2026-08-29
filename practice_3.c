#include <stdio.h>
#include <stdbool.h>


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
int main(){
    //switches();
    nested_if_statements();
}