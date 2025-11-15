//Q50: Write a program to print the following pattern:
#include<stdio.h>
int main() {
    
    for(int i=1; i<=5; i++ ) {
        for(int j=1; j<i; j++ ) {
            printf(" ");
        }
        for(int k=5-i+1; k>=1; k-- ) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/