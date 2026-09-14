/*
CONTENTS
1. Ternary operator
2. typedef
3. enum
4. struct
5. typedef struct
6. array struct
7. pointers
*/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// ternatory operator =shorthand for if else statements
//(condition) ? value_if_true : value_if-false


void ternary_operator(){
    int x = 7;
    int y = 8;
    int max = (x>y)? x : y;
    printf("%d",max);


    //example 2

    bool isOnline = true;

    printf("%s", (isOnline) ? "online": "offline");


    //example 3:

    int num = 8;

    printf("%d is %s", num, (num%2==0) ? "even": "odd");


    //exampple 4

    int age = 25;

    printf("%s", (age>18) ? "adult" : "child");


    //example 5
    int hours = 11;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";
    printf("%02d:%02d %s", hours , minutes ,meridiem);


}


//--------------------------------------------------------------------//

typedef int Number;
typedef char String[50];
// typedef char String[50]; can also be written as typedef char* String;
typedef char Initials[3]; //notice that you can write two different typedefs for 
//an already existing type. so here we wrote two typedefs for char, for two different
//purpose of use

void typedef_explain(){

    //typedef exiisting_datatype nickname

    Number x = 3;
    Number y = 4;
    Number z = x+y;

    printf("%d\n", z);


    char name[] =  "bro code";
    String name2 = "no code";
    printf("%s\n", name);
    printf("%s\n", name2);


    Initials user1 = "BC";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);
    


}

//-----------------------------------------------------------------//
enum Day{ // enums is a set of constants. each constant has a assigned value(int). by default value is 0 unless assigned
    SUNDAY= 1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7
};
void enums(){
    enum Day today = SATURDAY;
    printf("%d", today);
}

//-------------------USING TYPEDEF WITH ENUM-----------------------------

typedef enum{ // enums is a set of constants. each constant has a assigned value(int). by default value is 0 unless assigned
    Mohin= 1, Mobin=2, Shaker=3, Rafi=4, Arin=5, Pewpew=6, Tango=7
}Students;

void enums2(){
    Students student = Rafi;
    printf("%d\n", student);

    if(student == Mobin  || student == Mohin){
        printf("Not madarchod");
    }
    else{
        printf("full madarchod");
    }
}

//----------------------------------------------------------------------//

typedef enum  {
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);//func prototype

void enums3(){
    Status status = SUCCESS;
    connectStatus(status);
    
}

void connectStatus(Status status){
    switch(status){
        case SUCCESS:        printf("connection was successfull");
        break;
        case FAILURE:
        printf("could not connect");
        break;
        case PENDING:
        printf("connecting...");
        break;

    }
}
//------------------------------------------------------------------------------

struct Student{
    char name[20];
    int age;
    float gpa;
    bool isFulltime;
};




void printStudent(struct Student student);


void struct_test(){
    struct Student student1 = {"Spongebob", 20, 3.2, true};
    struct Student student2 = {"Fazil", 70, 7.2, true};
    


    printf("%s\n", student1.name);
    printf("%s\n", student2.name);
    printf("\n");

    struct Student student4 = {0};

    //assign values to the empty string
    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFulltime = true;

    printStudent(student1); 
    printStudent(student4); 
    
}

void printStudent(struct Student student) {//"struct Student" is the data type here. "student" is the variable. 
    //for eg. just like in  the normal parameter "int age", "int" is the data type and "age"  is the variable; 
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFulltime) ? "yes" : "no");
    printf("\n");
}


//=========================================================================//


//typedef version example
typedef struct {
    char house_name[30];
    int house_number;
    float rent_price;
    bool isAvailable;
}House;//"House" is the type


void printHouse(House house);
void struct_test2(){
    House house1 = {"MANKI VILLA", 838, 550.00f, true};
    House house2 = {0};

    strcpy(house1.house_name, "Regent st");
    house2.house_number = 646;
    house2.rent_price = 480.00f;
    house2.isAvailable = false;

    printHouse(house1); 
    printHouse(house2); 
    
}

void printHouse(House house) {
    printf("%s\n", house.house_name);
    printf("%d\n", house.house_number);
    printf("%.2f\n", house.rent_price);
    printf("%s\n", (house.isAvailable) ? "yes" : "no");
    printf("\n");
}

//====================================================================//
//arrays of struct = array where each element contains a struct
//helps organixe and groups together related data


typedef struct {
    char model[24];
    int year;
    int price;
}Car;

void array_struct(){


    Car cars[] = {{"mustang", 2025, 32000}, 
                    {"corvette", 2026, 50000},
                    {"challenger", 2030, 70000}};

    int number = sizeof(cars)/sizeof(cars[0]);

    for (int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    // Car car1 = {"mustang", 2025, 32000};
    // Car car2 = {"corvette", 2026, 50000};
    // Car car3 = {"challenger", 2030, 70000};

    // printf("%s %d $%d\n", car1.model, car1.year, car1.price);
    // printf("%s %d $%d\n", car2.model, car2.year, car2.price);
    // printf("%s %d $%d\n", car3.model, car3.year, car3.price);

}


//===========================================================================//
//POINTERS:
//pointer = a variable that stores the memory address of another variable
// benefits = theyhelp avoid wasting memory by allowing you to pass the address
// of a large data structure instead of copying entire data

void topic_pointers(){

    printf("Pointers");
    int age = 32;
    int *pAge = &age;

    printf("value of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("value of age: %d\n", age);
    printf("value at stored address %d\n", *pAge);

    /*difference between pAge, &age and *pAge;
    pAge basically is the variable that stores the address. &age "is" the actual address of age and 
    we are storing it in pAge since it is a variable that can store the address. 
    *pAge , here * is used for 2 reasons . firstly bc * is written to write a pointer since only pointers can store addresses,
    and thats how it turn pAge into something that can store an address. and second job is dereferencing which means to get back to 
    the value of the address, which is the actual age 32 (last line of printf)
    */


}


void birthday(int* age);
void pointers(){


int age = 25;
int *pAge = &age; //store the value of age in to the pointer called pAge

printf("%p\n", &age);// this gives me the actual address, not teh value. %p means return a pointer adress
printf("%p\n", pAge); //pAge is the pointer variable. * is the dereferencing sign. 
// * basically points to the actual value
// int *pAge = &age;  means pAge is a pointer variable which points to the value stored at the
//address of &age with the help of the dereferencing symbol *

birthday(pAge); // we are passing a pointer here for the parameter
birthday(&age); //same as birthday(pAge);
printf("You are %d years old",age);


}

void birthday(int* age){//fucntion to increment age
    //fucntions in c are pass by value

    (*age)++;
}



//=======================================================================//
// C is pass by value
// In C, all arguments are passed by value. This means when you pass a variable into a function, C creates a local copy of that variable inside the function. 
// Any modifications made to that variable inside the function only affect the copy, leaving the original variable in the calling function untouched.
// why my initial code didnt work
// initial code


// void birthday(int age) {
//     age = age + 1; // Only modifies the local copy!
// }

// void pointers() {
//     int age = 25;
//     birthday(age); // 'age' here remains 25
//     printf("You are %d years old\n", age); // Printed 25
// }

// this is what i wrote initially and it doesnt work because void birthday doesnt return an integer
// and here birthday() received a temporary copy of age (value 25). It incremented the copy to 26 and 
// then immediately threw that copy away when the function ended. The original age in pointers() was never modified.


// but here 

// int birthday(int age) {
//     return age + 1; // Evaluates copy + 1 (26) and returns it
// }

// void pointers() {
//     int age = 25;
    
    
//     age = birthday(age); 

//     printf("You are %d years old\n", age); 
// }

// used the return value of birthday(age) and assigned it back to age (age = birthday(age);). 
// This explicitly updated the memory location of age inside pointers(). so here it means the copy was actually updated, 
// but finally the original value was replaced by the copy through return


//===================================================================================//
int main(){
    // ternary_operator();
    //typedef_explain();
    // enums2();
    // enums3();
    // struct_test();
    // array_struct();
    pointers();
    
    return 0;
}