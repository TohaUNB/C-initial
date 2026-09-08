#include <stdio.h>

void checkBalance(float balance);
float depositMoney();
float withdrawMoney(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("*** scotiabank ***")
    

    do{
        printf("\nSelect an option: \n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ")'
        scanf("%d", &choice);


    }while( choice != 4);
    return 0;
}


void checkBalance(float balance){

}
float depositMoney(){
    return 0.0f;
}
float withdrawMoney(float balance){
    return 0.0f;
}