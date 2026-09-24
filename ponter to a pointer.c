//how c uses pass by value 
//examples  and usage of pointers of pointers
#include <stdio.h>








// Function accepts memory addresses (pointers) as arguments

void levelUp(int *health_ptr, int *exp_ptr) {
    *health_ptr = *health_ptr + 50; // Go to health's address and update value
    *exp_ptr = *exp_ptr + 100;      // Go to exp's address and update value

}



int main() {
    int hp = 100;
    int xp = 0;
    // Pass the memory addresses using the '&' (address-of) operator
    levelUp(&hp, &xp);
    printf("HP: %d, XP: %d\n", hp, xp); 
    // Output: HP: 150, XP: 100 (Originals modified directly in memory!)
    return 0;
}

//so when levelUp(&hp, &xp); is called, it means "go the the address of these two varibales, 
//use the levelup function on those varables at that addrsss and update them at that address,.
//that way the initalvariable values mentioend in main gets obsolete and updated" did i get that rihgt? 

//usage 1: he Classic Swap Function
//Because C passes by value, a standard swap(int a, int b) only swaps copies. 
//Using pointers allows us to swap the actual values in main().

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int x = 10;
    int y = 20;

    printf("before swap: x = %d, y - %d", x, y);
    swap(&x, &y); 
    printf("after swap");
}


//Example 2: Returning Multiple Values (Division with Remainder)
//C functions can only return a single value using the return statement. Pointers solve this by 
//letting you pass empty variables into a function to be "filled in" with secondary outputs.
//means you can return more than one value



// Function divides dividend by divisor, updates quotient and remainder via pointers,
// and returns 1 for success, or 0 if dividing by zero.
int divide(int dividend, int divisor, int *quotient_ptr, int *remainder_ptr) {
    if (divisor == 0) {
        return 0; // Failure (cannot divide by zero)
    }

    *quotient_ptr = dividend / divisor;  // Direct update to main's variable
    *remainder_ptr = dividend % divisor; // Direct update to main's variable
    return 1; // Success flag
}

int main() {
    int q, r;
    int success = divide(17, 5, &q, &r);

    if (success) {
        printf("17 / 5 = %d with a remainder of %d\n", q, r);
        // Output: 17 / 5 = 3 with a remainder of 2
    } else {
        printf("Error: Division by zero!\n");
    }

    return 0;
}


//Example 3: Modifying Dynamic Memory (malloc) Inside a Function
//If you want a function to allocate memory on the heap using malloc() and give that memory back 
//to main(), you have to pass a pointer to a pointer (int **). This allows the function to 
//modify the address stored in main()'s pointer.

#include <stdio.h>
#include <stdlib.h>

// Function accepts a pointer-to-a-pointer (int **) to modify the pointer in main
void allocateArray(int **arr_ptr, int size) {
    // Allocate memory on the heap and assign its address to main's pointer
    *arr_ptr = (int *)malloc(size * sizeof(int));

    // Fill the newly allocated memory with values
    for (int i = 0; i < size; i++) {
        (*arr_ptr)[i] = (i + 1) * 10; // Array elements: 10, 20, 30
    }
}

int main() {
    int *numbers = NULL; // Initially points to nothing
    int count = 3;

    // Pass the address of the pointer variable 'numbers'
    allocateArray(&numbers, count);

    for (int i = 0; i < count; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    // Output:
    // numbers[0] = 10
    // numbers[1] = 20
    // numbers[2] = 30

    free(numbers); // Free heap memory when done
    return 0;
}