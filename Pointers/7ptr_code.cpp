#include<iostream>
#include<cstring>

using namespace std;

//character arrays and pointers

void print(char c[]){
    int i=0;
    while (*(c+i) != '\0') //or while(c[i] != '\0')
    {
        printf("%c",c[i]);
        i++;
    }
}

int main(){

    char name[] = "srirama"; //it automatically adds null character at the end and set no of elements
    char second_name[10] = {'r','a','m','a', '\0'}; //added null character at the end, so even though we assign 10 elements, it will print until null character
    // suppose if we dont assign null character at the end, it may print garbage values.

    cout<<"name using char array: "<<name<<"\n"; //prints until null character
    cout<<"second name using char array: "<<second_name<<"\n"; //may print garbage

    printf("size in bytes = %d\n", sizeof(name)); //8 bytes including null character
    printf("length of string = %d\n", strlen(name)); //7 characters excluding null character

    //note: strlen() function counts number of characters until null character, downloaded from cstring library.

    char * cptr = name; //pointer to char array, points to first element of array
    cptr[0] = 'R';
    cout<<"name after changing first character using pointer: "<<cptr<<"\n"; //prints until null character

    //arthemetic operations on char pointers
    cout<<"2nd character of name using pointer arithmetic: "<<*(cptr+1)<<"\n"; //prints 2nd character of name
    *(cptr+1) = 'R'; // we can assign value to 2nd character using pointer arithmetic
    cout<<"name after changing 2nd character using pointer arithmetic: "<<cptr<<"\n";
   
    
}