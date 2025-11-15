//Q26: Write a program to print numbers from 1 to n.
#include<stdio.h>
int main() {
    int i, n;
    printf(" enter a number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        printf("%d ", i);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/