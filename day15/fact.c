//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main() {
    int i, n, fact = 1;
    printf("enter your no. ");
    scanf("%d", &n);

    for(i=n; i>=1; i--) {// or for(i=1; i<=n; i++)
        fact *= i;
    }
    printf("%d\n", fact);
    
    
    return 0;

    }

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/