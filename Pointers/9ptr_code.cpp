#include<iostream>

using namespace std;

//pointers and 2D arrays

//*(A+i) is equal  to A[i]
//(A+1) is same as &A[i]

//example for one dimesion: int A[5] = {1,2,3,4,5}; 
// int *p = A; // or int *p = &A[0];
// then *(p+2) is same as A[2] which is 3

// example for two dimesion: int A[2][3]; // 2 rows and 3 columns


//first row (B[0] or *(B+0) is address of first element of first row):
//         =value  = address
// B[0][0] = 11 = 400 
// B[0][1] = 12 = 404
// B[0][2] = 13 = 408

//second row  (B[1] or *(B+1) is address of first element of second row):
// B[1][0] = 14 = 412
// B[1][1] = 15 = 416
// B[1][2] = 16 = 420

// pictorial representation of 2D array in memory
//  Address
//   400  404  408
//   412  416  420
// Value
//   11   12   13       
//   14   15   16

// OTHER WAY OF REPRESENTATION OF 2D (2*3) ARRAY IN MEMORY
//
// B[0][1] B[0][2] B[0][3]  or just B[0]
// ---------------------------
// B[1][0] B[1][1] B[1][2]  or  just B[1]

// B+1 or &B[1] is address of first element of second row
// *B or B[0] or &B[0][0] is address of first element of first row
// B[1] or *(B+1) or &B[1][0] is address of first element of second row


//  int *p[3] = B; // or int *p = &B[0][0]; 
// what is meaning of [3] in int *p[3] = B;
// it means p is an array of 3 pointers, each pointer points to an integer

//B or & B[0] is address of first row
// *B or B[0] or &B[0][0] is address of first element of first row

// B[1] or *(B+1) is address of first element of second row - 412
// *(B+1) or B[1] or &B[1][0] --412

// *(B+1)+2 or B[1]+2 or &B[1][2] --420
// *(*B+1) ==> &B[0][0]+1 ==> B[0][1] ==> 404 ==> 12

// B[i][j] = *(B[i]+j) = *(*(B+i)+j)

int main(){


}