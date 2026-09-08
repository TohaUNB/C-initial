#include <stdio.h>

void checkBalance(float balance);
float depositMoney();
float withdrawMoney(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("*** scotiabank ***");
    

    do{
        printf("\nSelect an option: \n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += depositMoney();
                break;
            case 3:
                balance -= withdrawMoney(balance);
                break;
            case 4:
                printf("\nThank you for using the bank\n");
                break;
            default:
                printf("\nInvalid choice. please select 1-4\n");
        }
    }while( choice != 4);
    return 0;
}


void checkBalance(float balance){
    printf("Your current balance is %.2f", balance);
}
float depositMoney(){
    
    float amount = 0.0f;
    printf("\nEnter amount to deposit\n");
    scanf("%f", &amount);

    if(amount<0){
        printf("invalid amount\n");
        return  0.0f;}

    else{
        printf("succesfully deposited %.2f\n", amount);
        return amount;
    }
    //sreturn amount;//as long as you just put the required return , the code will run
}


float withdrawMoney(float balance){
    float amount = 0.0f;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);
    
    if(amount < 0){
        printf("invalid amount\n");
        return 0.0f;
        
        
    }
    else if(amount> balance){
        printf("\nInsufficient funds\n");
        return 0.0f;

    }
    else{
        printf("succesfully withdrew %.2f", amount);
        return amount;
    }
    return amount;
}