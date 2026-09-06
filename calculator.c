//calculator with switches and nest if statements

#include <stdio.h>

int main(){
    float num1 = 0.0;
    float num2 = 0.0;
    float total = 0.0;
    char operator = '\0';

    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%c", &operator);
    
    switch(operator){
        case '+':
            total =num1 + num2;
            break;
        case '/':
            total = num1/num2;
            break;
        case '-':
            total = num1 - num2;
            break;
        case '*':
            total = num1*num2;
            break;
        default:
            printf("put a valid sign");
          
    }

    printf("the result is %lf", total);
}