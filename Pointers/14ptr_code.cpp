#include  <iostream>

using namespace std;

//function pointers
//pointer can point to data and functions as well.

int add(int a, int b){
    return a+b;
}

int main(){
    int (*fun_ptr) (int, int) = &add; // function pointer declaration and initialization
    // int *fun_ptr = &add; // also works fine
    // int (*fun_ptr)(int, int) = add; // also works fine

    int sum = (*fun_ptr)(5, 10); // dereferencing and calling function using function pointer
    cout<<"Sum using function pointer: "<<sum<<"\n";
}