#include<iostream>

using namespace std;

int main()
{
    //void pointer can hold address of any data type
    //but we cant dereference void pointer directly because it has no data type

    //also we cant do pointer arithmetic on void pointer because it has no data type

    int a = 1435;
    printf("value of a is %d\n", a);

    void * pv = &a; // void pointer holding address of int variable a
    // printf("value at address pv is %d\n", *pv); // this will give compile time error so dont dereference it.

    //we can assign int to char pointer and dereference it
    int* ip = &a; // type casting void pointer to char pointer
    printf("value at address ip is %d\n", *ip);

    // int 10 is stored in memory as 4 bytes and char pointer will read only 1 byte
    // 1435 in 4 bytes is 00000000 00000000 00000101 10011011
    // 10011011 is 1 byte which is -101 in decimal ,left most bit is sign bit 1, so its negative number and invert all bits and add 1 to get magnitude of negative number
    // so dereferencing type casting char pointer will give -101 in decimal is 10011011 in binary (sign bit is 1 so negative number)
    char * cp = (char*) ip; // type casting void pointer to char pointer
    printf("value at address cp is %d\n", *cp);

    // we can do pointer arithmetic on char pointer
    cp = cp + 1; // now cp will point to next byte - 00000101 which is 5 in decimal. left most bit is sign bit 0 so positive number, can directly convert to decimal
    printf("value at address cp after adding 1 is %d\n", *cp);
    
    return 0;
}