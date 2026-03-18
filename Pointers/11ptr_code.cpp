#include<iostream>

using namespace std;

// applications memory

// Heap, stack, static/Globa, code (Text)

//in c language, we have malloc (memory allocation), calloc (contiguous allocation) , realloc, free for dynamic memory allocation and deallocation
//in cpp language, we have new and delete for dynamic memory allocation and deallocation

// suppose we have 3 functions: main, fun1, fun2. fun1 calls from main, fun2 calls from fun1
// when main calls fun1, fun1 is pushed to stack memory, when fun1 calls fun2, fun2 is pushed to stack memory
// when fun2 returns, it is popped from stack memory, control goes to fun1
// when fun1 returns, it is popped from stack memory, control goes to main
// when main returns, it is popped from stack memory, program ends

//once main also finishes execution, global variables also freed or all stack memory is freed automatically

// suppose if main function calls fun1 in infinite loop, then stack memory will be filled with fun1 calls, 
// eventually stack overflow will occur.


int main(){

    int temp =5; // local variable, stored in stack memory

    int *ptr = (int*)malloc(sizeof(int)); // c programme dynamic memory allocation, stored in heap memory
    // malloc returns void pointer, so typecasting is necessary
    // after using malloc, free the memory using free(ptr); else memory leak will occur.

    *ptr = 10; // assigning value to allocated memory
    cout<<"value of ptr: "<<*ptr<<"\n";
    cout<<"address of ptr in heap: "<<ptr<<"\n"; // address of ptr in heap memory
    cout<<"address of temp in stack: "<<&temp<<"\n"; // address of temp in stack memory
    free(ptr); // free the memory allocated using malloc

    //suppose if we dont free the memory (or comment above free(ptr)) and allocate ptr again using malloc, 
    // then memory leak will occur
    ptr = (int*)malloc(sizeof(int));
    *ptr = 20;

    //so 20 assigned to ptr, but previous memory allocated to ptr is not freed, so memory leak occurs
    cout<<"value of ptr after reallocation without free: "<<*ptr<<"\n";
    free(ptr);

    //---------------------------------------------------------------------------------------------------//

    //below is example of using new and delete in cpp for dynamic memory allocation and deallocation
    int *p = new int; // new operator allocates memory in heap
    //remember we are not using typecasting here, as new returns pointer of appropriate type
    // new and delete are typesafe, so no need of typecasting.

    delete p; // delete operator frees memory allocated using new

    p = new int [20]; // allocating array of 20 integers in heap memory
    delete [] p; // freeing array memory allocated using new

}