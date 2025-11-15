//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main() {
    int i, n, sum = 0;
    printf(" enter a number:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1)  ; 
    }
    printf("%d\n", sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/