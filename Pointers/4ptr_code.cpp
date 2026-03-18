#include<iostream>

using namespace std;

// pointers as function arguments - call by reference using pointers
int increment(int *p){
    *p = *p+1; // dereferencing pointer to increment value
}

//call by value - passing value of variable to function
int increment_val(int p){
    p = p + 1; // this will not update value of variable in main function
    return p; //must use return to get updated value
}

// call by reference - passing address of variable to function
int increment_ref(int &p){ // p is reference to variable
    p = p + 1; // this will update value of variable in main function
}

int main()
{
    
    return 0;
}