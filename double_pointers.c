// Pointer to a pointer . In details and easy
// Example 1: 

#include <stdio.h>

int main() {
    int x = 10;        // a normal variable
    int *p = &x;        // p holds the ADDRESS of x
    int **pp = &p;       // pp holds the ADDRESS of p

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);   // dereference p once -> gives x
    printf("**pp = %d\n", **pp); // dereference pp twice -> gives x

    return 0;
}
// p points to x. pp points to p. To get back down to the actual number 10, you have to "unwrap" twice: **pp. One * gets you to p's value 
//(which is an address), the second * gets you to what that address holds (10).



// Example 2:

#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;
    int **pp = &p;

    **pp = 100;   // changes x, through pp -> p -> x

    printf("x = %d\n", x); // prints 100
    return 0;
}

// Ex3. Important:

#include <stdio.h>

int main() {
    int x = 1, y = 2;
    int *p = &x;
    int **pp = &p;

    printf("p points to value: %d\n", *p); // 1

    *pp = &y;   // this changes p itself, not x or y!

    printf("p points to value: %d\n", *p); // 2

    return 0;
}

// Explanation:
// So let me get this right
// pp = &p
// So *pp means go to the address of &p and see what's in there. So in there it is &x. Now
// *pp = &y means change that &x to &y
// Here is the step-by-step logic mapped directly to what you wrote:
// 1.
// pp = &p→ pp stores the memory address of p.
// 2.
// *pp → Dereference pp: "Go to the address inside pp (&p ) and look at what is stored there. "What's stored inside p is &x
// 3.
// Reassign
// *pp : "Go to the
// p
// and replace whatever
// *pp = &y
// memory location
// address is inside it with &y ."
// Because *p was previously holding &x, this operation overwrites &x with &y inside the pointer
// You have mastered the mechanics of double pointers


// Example 4:

#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("Address of x:  %p\n", (void*)&x);
    printf("Value of p:    %p  (this equals address of x)\n", (void*)p);
    printf("Address of p:  %p\n", (void*)&p);
    printf("Value of pp:   %p  (this equals address of p)\n", (void*)pp);

    return 0;
}


// Example 5:

#include <stdio.h>
#include <stdlib.h>

void allocate(int **out) {
    *out = malloc(sizeof(int)); // change the CALLER's pointer
    **out = 99;
}

int main() {
    int *ptr = NULL;
    allocate(&ptr);  // pass address of ptr, i.e. a pointer to a pointer

    printf("ptr now points to a value of: %d\n", *ptr);

    free(ptr);
    return 0;
}


// Ok. 
// So. Step by step
// Malloc fucntion creates a room in heap memory and creates an address for that. 
// In main, we create a pointer variable of type int named ptr and we don't put anything/any address in it. For now we put NuLL in it. 
// Now we call allocate function 
// Allocate function takes in a double pointer.
// So we put &ptr in allocate in main func. This means we are putting in a double pointer since ptr is already a pointer, and &ptr means address to THAT pointer. So it's a pointer to a pointer.
// In allocate, 
// *out means dereferencing &ptr(address[2] of an address[1]) once, so we get the value that ptr has which is an address, which is currently set as Null.. Now malloc has made an address and replaces that with null. So now *ptr has an address instead of null.
// **out means directly go to the value of out or value of ptr. And change it to 99. So if we do printf(*ptr) we get 99 now
