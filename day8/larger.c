//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main() {
    int a, b, c ;
    printf("enter the value of a : ", a);
    scanf("%d", &a);

    printf("enter the value of b : ", b);
    scanf("%d", &b);

    printf("enter the value of c : ", c);
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("all are equal\n");
    } else if (a > b && a > c) {
        printf("a is the largest\n");
    } else if (b > a && b > c) {
        printf("b is the largest\n");
    } else {
        printf("c is the largest\n");
    }
    return 0;
}
    
    


/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/