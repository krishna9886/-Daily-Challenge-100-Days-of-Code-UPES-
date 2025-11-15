//Q48: Write a program to print the following pattern:
#include<stdio.h>
int main() {    
    int n ;
    printf("enter number of rows:");
    scanf("%d",&n); // Number of rows

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for each column in the current row
            printf("%d", j); // Print number
            
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/