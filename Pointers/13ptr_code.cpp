#include<iostream>

using namespace std;

void printhwd(){
    printf("Hello World from printhwd function\n");
    }

int *adder(int* a, int* b){
    int c = *a+ *b; // here c is local variable, so get destroyed after function call
    return &c;
}

int *ptr_adder(int* a, int *b){
    int* c = (int*)malloc(sizeof(int)); // allocating memory in heap, so it will not get destroyed after function call
    *c = *a+*b;
    printf("Address hold by c (heap memory) in ptr_adder function: %d\n", c);
    printf("Address of c in ptr_adder function: %d\n", &c);
    return c;
}

int main(){
    int a = 20 , b = 30;
    // int *c = adder(&a, &b); // will give garbage value as c is local variable and get destroyed after function call
    int *c = ptr_adder(&a, &b); // will work fine as memory is allocated in heap using malloc
    printf("Value of c from adder function: %d\n", *c);
    printf("Address of c in main function: %d\n", &c);
    printf("Address of c in heap memory: %d\n", c);
    free(c); // free the memory allocated in heap using malloc
}