//ternary operator

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

//typedef version
typedef struct {
    char name[20];
    int age;
    float gpa;
    bool isFulltime;
}Studentx;
void printStudent(struct Student student);


void struct_test(){
    struct Student student1 = {"Spongebob", 20, 3.2, true};
    struct Student student2 = {"Fazil", 70, 7.2, true};
    Studentx student3 = {"Shaker", 55, 4.2, true};
    


    printf("%s\n", student1.name);
    printf("%s\n", student3.name);
    printf("\n");

    Studentx student4 = {0};

    //assign values to the empty string
    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFulltime = true;

    printStudent(student1);

    



    

    
}

void printStudent(struct Student student) {//pass a struct to a function
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFulltime) ? "yes" : "no");
    printf("\n");
}
int main(){
    // ternary_operator();
    //typedef_explain();
    // enums2();
    // enums3();
    struct_test();
    
    return 0;
}