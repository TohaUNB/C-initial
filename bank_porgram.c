//banking program by me

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkBalance(int bal);
int deposit_money(int bal);
int withdraw_money(int bal);

int main() {

    
    int balance = 0;
    printf("-------SCOTIABANK E-SERVICE-------\n");
    

    int choice = 0;
    

    do{
        printf("Choose an option: \n");
        printf("1. CHECK BALANCE\n");
        printf("2. Deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            checkBalance(balance);
            break;

            case 2:
            balance = deposit_money(balance);
            break;

            case 3: 
            balance = withdraw_money(balance);
            break;

            case 4:
            printf("You exited");
            break;
            
    }

    }while(choice != 4);//choice < 1 || choice > 4 not using this here bc if i use this logic then it means 
    //the code will run for any of these 4 numbers. but i want the loop to continue always , and only end the loop when 4 is input 
    //cuz 4 means exit

    


    return 0;
}

void checkBalance(int bal){
    printf("Your balance is %d\n", bal);
}

int deposit_money(int bal){
    printf("Enter the amount to be deposited: ");
    int deposit =0;
    scanf("%d", &deposit);
    bal += deposit;
    return bal;
}

int withdraw_money(int bal){
    printf("Enter the amount to be withdrawn: ");
    int withdraw =0;
    scanf("%d", &withdraw);
    bal -= withdraw;
    return bal;





}

