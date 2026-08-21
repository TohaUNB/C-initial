#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void topic_variables(){

    printf("variables");
    /*different types of variables*/
    /* data types and format speicifier (%d, %f, %lf, )*/

    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);



    float gpa = 2.5;
    printf("Your gpa is %f\n",  gpa);
    /// c has the default behavior of displaying 6 digits after the decimal ///
    float price = 19.99;
    printf("The price is $%.2f\n", price);
    /* to disply only a fixed number of digits after the deecimal we use .1 or .2 depending on how many digits we want to show */
    float temperature = -10.1;
    printf("the temperature is %f\n", temperature);


    /* double gives you more preciosn than a float,upto 15-16 digits after the decimal*/

    double pi = 3.141479375949;
    double e = 2.718729873429749;

    printf("the value of pi is %.15lf\n", pi);
    printf("the value of e is %.15f\n", e);

    /* used .15 bc i want to print upto 15 digits after the decimal*/

    /* char stores a single character*/

    char grade = 'A';
    char symbol = '!';
    
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);


    /* there is no string in c, so we use an array of characters to store more than one character*/

    char name[] = "Toha";
    char food[] = "Burger";

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);


    /* booliean needs a header file name #inlcude <stdbool.h>*/
    ///boolean is only true or false///
    
    /*true = 1, false = 0, can use 0 or 1*/

    bool isOnline = false;
    if(isOnline){
        printf("You are online");

    }
    else{
        printf("You are offline");
    }

    bool isStudent = 1;

    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are not a student");
    }

// variables = reuseable container for a value. behaves as if it were the value if contains
// int = whole numbers (4 bytes in mordern systems)
// float = singe precision decimal number upto 6 digits (4 bytes)
// double = double precision decimal number upto 15 digits (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false(1 byte, requires <stdbool.h>)

    
}


void format_specifier(){

    printf("Format specifiers");
    // format specifier = special tokens that begin with % symbol
    // followed bya character that specifies the data types and opitonal
    // modifiers (width, precision, flags.)
    // they control how data is displayed or interpreted

    int age = 25;
    float price  = 19.99;
    double pi = 3.1415926535;
    char currency = 'S';
    char name[] = "Bro code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    //width modifier (means minimum numbers to print and put spaces before the numbers). 
    //put a number before the format spcifier
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1); //blank spaces before the number
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    printf("%-4d\n", num1);//puts blank spaces after the number
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);

    printf("%03d\n", num1);//put zeroes before the number
    printf("%03d\n", num2);
    printf("%03d\n", num3);

    printf("%+d\n", num1);//puts sign before the numbers and displays as such
    printf("%+d\n", num2);
    printf("%+d\n", num3);
    

    //PRECISION modifier

    printf("\nPrecision specifiers\n");

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.1f\n", price1);// output is also rounded off
    printf("%.2f\n", price2);
    printf("%.3f\n", price3); //shows th enumber of digits after the decimal

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);



    }



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

void arithmetic_operators(){

    printf("\narithmetic operators\n");

    int x = 2;
    int y = 3;
    int z = 0;
    float a = 0;
    float b = 3;

    int w = 0;

    z = x/y;
    a = x/y;
    a = x/b;

    printf("%d\n", z);
    printf("%f\n", a);

    w = y % x; //modulus, gives you the remainder. can be used to check even odd

    printf("%d\n", w);

    x++;
    x--;

    //augmented assignment operators

    x += 2; //same as x = x +2;
    x -= 3; //same as x = x - 3;
    //x*= 2, x/=2



    
    return 0;





}
void user_input(){
    printf("\nhello\n");
    int age = 0;
    float gpa = 0.0f; //this tells you that this one should be a float not a int
    char grade = '\0'; //null terminator
    char name[30] = "";

    printf("enter your age:");
    scanf("%d", &age);

    printf("enter your gpa:");
    scanf("%f", &gpa);

    printf("enter your grade");
    scanf(" %c", &grade); 

    //-----------------------------------// 
    //so basically scanf("%c")eats up the previous \n from  the prevoius scanf. and thats why after that 
    //if you put a space before %c , it solves the problem. therefore scanf(" %c")

    //space before c is beacuse there is a hidden \n after &gpa and
    //its putting a blank and not allowing me to type the grade


    printf("enter your first name");
    scanf("%s", &name);//means file get string


    getchar();// clears the newline character within the input buffer from immediate last scanf(in this case scanf(%s))
    printf("enter your full name");
    fgets(name, 30, stdin);//means file get string, 30= size of string, stdin=standard input
    name[strlen(name)-1] = '\0'; //we did this to fix the fget printf(name) at the begining problem

    //why use fgets and not scanf("%s")?
    //thats because fgets can read a whole line along with the spaces in between, scanf cannot do that

    //fgets(name, sizeof(name), stdin); this also works, we are directly pulling the size ofname
    // printf("%d\n", age);
    // printf("%f\n", gpa);
    // printf("%c\n", grade);
    // printf("%s\n", name);
    
    
    printf("%s\n", name); //we print name before anything else and face a problem
    //which is the newline after printing the full name. this is bc fgets also takes in
    // the 'enter' from enter key when we start running the code. to fix that we use header 
    //include <string.h>
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    



    
}

int main(){
    topic_variables();
    format_specifier();
    topic_pointers();
    arithmetic_operators();
    user_input();
    
    return 0;
}
