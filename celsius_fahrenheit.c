#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    printf("Temperature conversion program\n");
    printf("Is the temperature in Celcius(C) or Fahrenheit(F)?");

    double temp = 0.0;
    char choice = '\0';
    double res = 0.0;
    scanf("%c", &choice);
    if(choice == 'C' || choice == 'c'){
        printf("Put in your temperature in Celsius: ");
        scanf("%lf", &temp);
        res = (temp * 1.8)+32;
        printf("The temperature in Fahrenheit is %lf", res);
    }
    else if (choice == 'F' || choice == 'f'){
        printf("Put in your temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        res = (temp - 32)/1.8;
        printf("The temperature in Celsius is %lf", res);}
    else{
        printf("Wrong choice. Try again later");
    }
    }