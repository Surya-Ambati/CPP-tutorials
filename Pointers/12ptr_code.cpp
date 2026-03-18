#include<iostream>

using namespace std;

//In c language allocate block of memory in heap - malloc (memory allocation), calloc(contingeous allocation), realloc (re-allocation)
//deallocate block of memory in heap - free

// in cpp we have new and delete for dynamic memory allocation and deallocation

// difference between malloc and calloc:
// malloc does not initialize memory (means if we not assign value then we can find garbage value), 
// calloc initializes memory to zero

// malloc takes single argument - total bytes to be allocated
// calloc takes two arguments - number of elements and size of each element

// malloc returns void pointer, so typecasting is necessary
// calloc also returns void pointer, so typecasting is necessary

// what is realloc?
// realloc is used to resize previously allocated memory block
// realloc takes two arguments - pointer to previously allocated memory and new size in bytes
// if new size is greater than old size, then new memory is allocated and old data is
// copied to new memory, old memory is freed
// if new size is less than old size, then old memory is truncated to new size

// if realloc fails, it returns NULL and old memory is not freed.

int main(){

    int temp;
    printf("Enter size of array: ");
    scanf("%d", &temp);

    int *ptr = (int*)malloc(temp*sizeof(int)); // malloc takes size in bytes
    //int *ptr = (int*)calloc(temp, sizeof(int)); // calloc takes number of elements and size of each element
    for (int i=0; i<temp; i++){ //initializing array is important as malloc does not initialize memory, else garbage value will be present
        ptr[i] = i+1;
    }
    for (int j=0; j<temp; j++){
        printf("value of ptr[%d]: %d\n", j, ptr[j]);
    }

    free(ptr); // free the memory allocated using malloc or calloc

    int *re_ptr = (int*)realloc(ptr, 2*temp*sizeof(int)); // reallocating memory to double the size
    int *re_ptr2 = (int*)realloc(NULL, temp*sizeof(int)); //realloc with NULL is same as malloc

    free(re_ptr);
    free(re_ptr2);

    return 0;
}