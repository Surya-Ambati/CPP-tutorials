#include<iostream>

using namespace std;

//pointer to pointer - a variable that strores the address of another pointer variable.


int main(){

    int price = 50;

    int *p1 = &price; // pointer to int variable price
    int **p2 = &p1; // pointer to pointer variable p1
    int ***p3= &p2; // pointer to pointer to pointer variable p2

    printf("defrefrencing p2 one time gives address of p1 %d\n", *p2);
    printf("dereferencing p2 is %d\n", **p2);
    printf("dereferencing p3 one time gives address of p2 %d\n", *p3);
    printf("dereferencing p3 two times gives address of p1 %d\n", **p3);
    printf("dereferencing p3 three times gives value of price %d\n", ***p3);

    return 0;

}