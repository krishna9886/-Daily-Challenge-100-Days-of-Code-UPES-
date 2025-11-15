//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>  
int main() {
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);// if a and b are 7 and 3
    a = a + b;  // then here now a value is 10
    b = a - b;  // and here b value is now 7
    a = a - b;  // and now again a value is 3
    printf("After swap: %d %d \n", a, b);   // this will print 3 and 7
    return 0;
}
/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/