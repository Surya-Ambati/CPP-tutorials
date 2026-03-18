#include<iostream>

using namespace std;

//pointers arrays


int main(){

    int arra[5] = {10,20,30,40,50};
    printf("array name prints address of first element: %d\n", arra);
    printf("address of first element using &: %d\n", &arra[0]);

    //assigning address of first element of array to pointer
    int *ptr = arra;
    //or
    int *ptr2 = &arra[0];

    printf("address of first element using pointer: %d\n", ptr);
    printf("address of first element using pointer2: %d\n", ptr2);

    //can do pointer arithmetic since arra elements are stored in contiguous memory locations
    printf("2nd element of array using pointer arithmetic: %d\n", *(ptr+1));


    //printing elements of array using pointer arithmetic:

    int arr[5] = {1,2,3,4,5};
    int *p[5]; // array of 5 integer pointers

    for(int i=0; i<5; i++){
        p[i] = &arr[i]; // assigning address of each element of arr to each pointer in p
    }

    for(int i=0; i<5; i++){
        cout<<*p[i]<<" "; // dereferencing each pointer to get value of each element of arr
    }

    return 0;

}