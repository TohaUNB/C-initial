/*
CONTENTS
1. Write file
2. Read file
3. Malloc
4. Calloc
5. Realloc
*/

#include <stdio.h>
#include <stdlib.h>



//============================================================================================================
int write_file(){
//============================================================================================================

    FILE *pFile = fopen("output.txt", "w");//w mwns write mode for writing a file
    //absolute location - location with the whole link to the diretory;
    char text[] = "booty booty booty";

    if(pFile == NULL){
        printf("error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("file was written succesfuly");
    fclose(pFile);//must close a file

    return 0;
}


//============================================================================================================
int read_file(){
//============================================================================================================

    
    FILE *pFile = fopen("roses are red.txt", "r");
    //buffer is a waitnig room that remprarily stores data 
    char buffer[1024] = {0};


    
    if(pFile == NULL){
        printf("coulnot open file\n");
        return 1;//menas there as errror
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }


    fclose(pFile);
    return 0;;
}


//============================================================================================================
int malloc_prac(){
//============================================================================================================

    //malloc = a function that dynamically allocates a specified number of bytes in memory
    //ynamic memory allocation means reserving memory for your program while it is running (at runtime), 
    //rather than asking for a fixed amount of memory when the code is compiled.
    // this allows arrays to have changeable sides
    //previoysly we made arrays to have only a fixed size
    //Size can be determined dynamically based on user input or data.


    // char gradex[5] = {0}; thisis how we usually do it


    // char *grades = malloc(100); //Declare a pointer named grades that points to a char, 
    //and allocate 100 bytes of memory on the heap for it

    int number;
    printf("enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number* sizeof(char)); // The malloc function returns a pointer to the location of the reserved memory.

    //the memory that we reserve here are from a location called heap
    //VVVIMP : Grades is a pointer here. we turned the variable in to a pointer by putting *before it

    
    //if malloc fails , it returns null. so we need to check if it returns null or not
    if(grades == NULL){
        printf("memory aloocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++){
        //It iterates number times to prompt the user for each individual grade 
        //and store that grade into the dynamically allocated array.
        printf("enter grade number #%d", i+1);
        scanf(" %c", &grades[i]); //You don't see a separate variable like char grade; because grades[i] is the variable.
    }

    for (int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

//How grades[i] works as a variable:
// grades is a pointer to the start of your allocated block of memory on the heap.
// When you attach [i] to grades, C treats grades just like an array.
// grades[0] is the 1st char variable in your memory block.
// grades[1] is the 2nd char variable, grades[2] is the 3rd, and so on up to grades[number - 1].

    free(grades); // returning the rented space back to the operating system
    //think of pointers as a star shaped key they unlock a value at a memory address when you derefence them
    grades = NULL; //avooids dangling pointers
    return 0;

}
//============================================================================================================
int calloc_practice(){
//============================================================================================================

    //calloc = contiguos allocation/ clear allocation
    //allocates memory dynamically and sets all allocated bytes to 0, effectively clears it
    //malloc is faster, but calloc() leads to less bugs
    //calloc(#, size) - # = number of elements, size = size of each element

    //number of players in a game
    int number = 0;
    printf("enter the numberof players: ");
    scanf("%d", &number);


    // int *scores = malloc(number * sizeof(int)); // will give garbage values
    int *scores = calloc(number,  sizeof(int)); //sets to zero

    if(scores == NULL){
        printf("no memory allocated\n");
        return 1;
    }
    
    for (int i = 0; i < number; i++){
        printf("enter score #%d ", i+1);
        scanf("%d", &scores[i]);

    }


    for (int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

}


//============================================================================================================
int realloc_prac(){
//============================================================================================================

    //reallocation. resize previously allocated memory
    //realloc(ptr, bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number *sizeof(float));

    if(prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number ; i++){
        printf("enter price #%d: ", i+1);
        scanf("%f", &prices[i]);

    }

    //realloc 

    int newNumber = 0;
    printf("Enter a new Number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if(temp ==NULL){
        printf("could not reallocate memory!\n");
        //return 1;
    }

    else{
        prices = temp;
        temp =NULL;

        for (int i = 0; i < newNumber ; i++){
        printf("enter price #%d: ", i+1);
        scanf("%f", &prices[i]); 
    
    }

        for (int i = 0; i < newNumber; i++){
        printf("$%.2f ", prices[i]);
    }
  
    }

    
    free(prices);
    prices = NULL;


}

int main(){
    //read_file();
    realloc_prac();
    return 0;
}