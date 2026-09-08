//practice arrays

#include <stdio.h>
#include <string.h>

void array(){
    //array = fixed size collection of elements of the same data type
    //similiar to a variable but it holds more than one value

    int numbers[] = {10,  20 , 30, 40, 50};

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    char name[] = "bro code";


    //formula to get how many elemtsare there in the  whole array
    //this formula always works even if ou keep changing the aray size mindlessly

    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("\nthe size of the array is %d\n", size);

    numbers[0] = 100;
    numbers[1] = 90;

    printf("%d\n", numbers); //gives something odd
    printf("%d", numbers[0]);
    printf("%d", numbers[1]);
    printf("%d", numbers[2]);
    printf("%d\n", numbers[3]);


    for(int i = 0; i < 5; i++ ){
        printf("%c ", grades[i]);

    }

    for(int i = 0; i < 8; i++ ){
        printf("%c ", name[i]);

    }

    for(int i = 0; i < 6; i++ ){
        printf("%c ", numbers[i]);

    }
}

void array_userinput() {

    //should use loop to enter values in an aarray in c
    int scores[5] = {0};
    //only writing int scores[5] gives garbag value
    //we do int scores[5] = {0} so all the values are reset to 0

    for (int i = 0; i < 5; i++){
        printf("enter a score: ");

        scanf("%d", &scores[i]);

    }

    for (int i = 0; i < 5; i++){
        printf("%d ", scores[i]);
    }
}


void array2d(){
    //2D array is where each element is an array, great for matrix or grid 
    //array[][] = {{}, {}, {}}

    int numbers[][10] = {{1, 2, 3}, // always need 2nd 3rd braket size given. represents columns
                        {3, 4, 5}, 
                        {7, 8, 9}, 
                        {10, 11, 12}};

    printf("%d ", numbers[0][0]);
    printf("%d ", numbers[0][1]);
    printf("%d\n", numbers[0][2]);
    printf("%d ", numbers[1][0]);
    printf("%d ", numbers[1][1]);
    printf("%d\n", numbers[1][2]);



    for (int i =0; i<4; i++){
        for (int j = 0; j< 3; j++){
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }


    

}

void array_2d_numpad(){
    char numpad[][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j< 3; j++){
            printf("%c ", numpad[i][j]);
        }
        printf("\n");

    }
}


void array_of_strings(){
    char fruits[][10] = {"apple",
                        "mango", 
                        "banana", 
                        "pineapple", 
                        "lemon"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][1] = 'e';
    fruits[0][4] = 'a';

    for (int i = 0; i< size; i++){
        printf("%s\n", fruits[i]);
    }
}

void array_of_strings2(){//user inputs array of strings
    char name[3][25] = {0};

    printf("Enter a name: ");
    fgets(name[0], sizeof(name[0]), stdin);
    name[0][strlen(name[0])-1] = '\0';
    printf("%s\n", name[0]);
    
}
int main() {
    // array();
    // array_userinput();
    //array2d();
    //array_2d_numpad();
    array_of_strings2();
    return 0;
}