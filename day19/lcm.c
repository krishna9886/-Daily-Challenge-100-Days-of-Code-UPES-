//Q37: Write a program to find the LCM of two numbers.
#include<stdio.h>
int main() {
    int a, b, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // The maximum number between a and b is stored in max
    max = (a > b) ? a : b;

    // Loop to find the LCM
    for (int i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
