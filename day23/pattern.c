//Q46: Write a program to print the following pattern:
#include<stdio.h>
int main() {
    int n = 5; // Number of rows and columns

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n; j++) { // Loop for each column
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/