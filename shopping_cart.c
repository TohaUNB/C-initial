#include <stdio.h>
#include <string.h>

int main(){
    //Shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) -1] = '\0';   //you need this to print the /s after "you have bought" to 
    //remove the automatic extra newline character that fgets generates


    printf("What is the price for the each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price*quantity;

    printf("\nYou have bought %d %s/s\n",quantity, item);

    printf("The total is: %c%.2f", currency, total);//MULTIple variables by format specifier

    


    return 0;
    
}