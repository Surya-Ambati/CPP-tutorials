#include<iostream>

using namespace std;

//what is pointer ?
//pointer is a variable that stores the address of another variable

//why we need pointer ?
//1. to access variable by reference
//2. to allocate memory dynamically
//3. to create complex data structures like linked list, tree, graph etc
//4. to pass function argument by reference
//5. to return multiple values from a function
//6. to work with arrays and strings    
//7. to improve performance by avoiding copying large data structures
//8. to work with hardware and memory directly

//is pointer same as reference ?
//no, pointer is a variable that stores the address of another variable, reference is an alias for another variable
//example
//int a = 10;
//int &b = a; // b is reference to a
//b = 20; // this will update value of a to 20
//cout << a; // this will print 20



int main(){

    int price = 50;

    int * pp = &price; // reference operator & to get address of variable price

    printf("Price is %d\n", price);
    printf("address of price is %d\n", &price);

    //note: %p is format specifier for pointer address - it will give address in hexadecimal format.
    //%d is format specifier for integer - if we use %d for pointer address will give decimal value.
    //%f is format specifier for float

    printf("address of pointer price - pp is %p\n", &pp);
    printf("address that hold by pointer pp is %p\n", pp);
    printf("value at address pp is %d\n", *pp);

    *pp = 100; //dereferencing pointer to update value
    printf("updated price by pointer pp %d\n", *pp);
    printf("updated price in variable - price : %d\n", price);

    //note: pointer must be initialized , just declaring pointer will create garbage value.

    int * pq; // uninitialized pointer
    // Avoid dereferencing uninitialized pointer
    printf("pq is uninitialized, do not dereference!\n");

    //good practice to initialize pointer to null
    int * pr = nullptr; // null pointer
    // printf("value at address pr is %d\n", *pr); // this will give runtime error so dont dereference it.
    if (pr == nullptr) {
        printf("pr is a null pointer\n");
    } 
    else {
        printf("value at address pr is %d\n", *pr);
    }


//pointer arthmetic
//we can add or subtract integer value to pointer but we cant add or subtract two pointers
//when we add or subtract integer value to pointer it will move the pointer by that many number of elements of the type it is pointing to

int *pa = &price; // pa is pointer to int
//price is int so size of int is 4 bytes
//if we add 1 to pointer it will move by 4 bytes
printf("Size of int is %zu\n", sizeof(price));

pa = pa + 1; // now pa will point to next int location
printf("address of pa after adding 1 is %d\n", pa);
// printf("dereferencing pa after adding 1 is %d\n", *pa); // this will give garbage value so dont dereference it.


    return 0;
}