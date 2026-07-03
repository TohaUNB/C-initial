int main(){
int age = 32;
int *pAge = &age;

printf("address of age: %p\n", &age);
printf("value of pAge: %p\n", pAge);

printf("value of age: %d\n", age);
printf("value at stored address :d\n", *pAge);

/*difference between pAge, &age and *pAge;
pAge basically is the variable that stores the address. &age "is" the actual address of age and 
we are storing it in pAge since it is a variable that can store the address. 
*pAge , here * is used for 2 reasons . firstly bc * is written to write a pointer since only pointers can store addresses,
and thats how it turn pAge into something that can store an address. and second job is dereferencing which means to get back to 
the value of the address, which is the actual age 32 (last line of printf)
*/

}
