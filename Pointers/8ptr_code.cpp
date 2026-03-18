#include<iostream>
#include<cstring>

using namespace std;


//character array and pointer

void print(char A[]){
    while(*A != '\0'){
        printf("%c",*A);
        A++;
    }
    printf("\n");
}

int main(){

    char temp[20] = "Hello World";
    print(temp);
}