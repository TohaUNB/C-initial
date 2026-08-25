#include <stdio.h>
#include <math.h>

int main(){

    // Compund principle;
    double A = 0.0f;
    double P = 0.0; //principal amount
    double r = 0.0f; //interest rate
    int n = 0; //amount of times the interest is compounded per time period
    int t = 0; //years


    printf("Compount interest calclulator\n");
    printf("Enter the principle amount: ");
    scanf("%lf", &P);

    printf("Enter the interest rate: ");
    scanf("%lf", &r);
    double rate = r/100;

    printf("Enter the number of years: ");
    scanf("%d", &t);

    printf("Enter the # of times compunded per year (n): ");
    scanf("%d", &n);


    double x = rate/n;
    double y = pow((1+x), n*t);
    A = P*y;

    // A = P * pow (1 + rate / n , t*n);
    printf("Your total compound interest is %lf", A);




}

