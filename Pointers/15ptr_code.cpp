#include<iostream>
#include<limits>

using namespace std;

//function pointers and callbacks
//function pointer can be passed as argument to another function this is called callback function

void funcA(){
    printf("Hello from funcA\n");
}
void B(void  (*funaC_ptr)()){
    printf("Hello from funcB\n");
    funaC_ptr(); // calling function using function pointer
}

int main(){
    B(funcA); // passing function as argument to another function and A is callback function

    int temp[2] = {1,2};
    // print max int and size of int in bytes
    printf("numeric_limits<int>::max() = %d\n", numeric_limits<int>::max());
    printf("sizeof(int) = %d bytes\n", sizeof(int));
    printf("no of elements in array = %d\n", size(temp)); // size() provide no of elements in array.
    printf("sizeof array no.of elements*bytes = %d bytes\n", sizeof(temp)); // sizeof provide size of array in bytes. (no of elements * bytes of element type)
}