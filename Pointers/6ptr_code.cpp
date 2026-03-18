#include<iostream>

using namespace std;

// array as function arguments
// printf("Array as function arguments\n"); //printf does not work in outside main or function.

int arr_out[6] = {11,12,13,14,15,16};
int out_main_size = sizeof(arr_out);
int out_size = sizeof(arr_out)/sizeof(arr_out[0]);

void double_arr_out(int A[])
{ int size_A = sizeof(A); 
    int size_A0 = sizeof(A[0]); 
    int size = sizeof(A)/sizeof(A[0]); 
    cout<<"size of size_A "<<size_A <<"\n"; 
    cout<<"size of size_A0 "<<size_A0 <<"\n"; 
    cout<<"size inside double arr out: "<<size; } 

void doubleArray(int *A, int size) // can also write int A[] instead of int *A 
    {   int size_array = sizeof(A);
        cout<<"size of array taking from main "<<size_array<<"\n";
        for(int i=0; i<size; i++)
        { A[i] = A[i]*2; // doubling each element of array 
            } 
    }

//remember if we use size of array calculation in doublearray function, it will not work as expected
// because when we pass array to function, it decays to pointer, so sizeof(A) will give size of pointer not size of array
// so always pass size of array as separate argument to function

// example: sizeof(A)/sizeof(A[0]) create in doubleArray function which is separate from main function in stack memory.
// so when we get copy of pointer A or array A[] in doubleArray function, it is a new pointer in stack memory
// so it take A[0] as first 4 bytes of pointer A, not first 4 bytes or 20 bytes of array A[] in main function
// so 4/4=1 not 20/4=5. So size will be 1 not 5.


void doubleArrayRef(int (&A)[5]){ // passing array by reference, size must be known at compile time
    printf("double Array as function by reference \n");
    for(int i=0; i<5; i++){
        A[i] = A[i]*2; // doubling each element of array
    }
}

//difference between passing array by pointer and by reference
// when passing array by pointer, size of array is not known to function, so must pass size as separate argument
// when passing array by reference, size of array is known to function, so no need to pass size as separate argument

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int in_size_arr = sizeof(arr);
    int size = sizeof(arr)/sizeof(arr[0]); // calculating size of array, which is 20/4 = 5
    doubleArray(arr, size); // passing array to function, no need to use & as array name is address of first element

    printf("Doubled array using pointer:\n");
    for(int i=0; i<size; i++){
        // cout<<arr[i]<<" "; // printing simple doubled array values
        printf("doubled array for arr[%d]: %d\n", i, arr[i]);
    } 

    cout<<"inside main size of arr -- "<<in_size_arr<<"\n";
    cout<<"outside main size of arr_out -- "<<out_main_size<<"\n";
    cout<<"size of arr_out -- "<<out_size<<"\n";
    // call pointer-version: must pass the element count explicitly
    // call reference-version: sizeof works correctly and yields total bytes (4*6 = 24)
    double_arr_out(arr_out);


    //Example for updating array:
    int temp[4] = {1,2,3,4};
    int *tptr = temp;
    tptr[0] = 10;
    cout<<"first element of int array after changing using pointer: "<<temp[0]<<"\n";

    return 0;

}

//note: size of pointer is always 4 bytes in 32 bit system and 8 bytes in 64 bit system
// irrespective of data type it is pointing to./
// so sizeof(ptr) will always give 4 or 8 bytes depending on system architecture
