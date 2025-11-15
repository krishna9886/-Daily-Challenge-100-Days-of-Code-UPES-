//Q38: Write a program to find the sum of digits of a number.
#include<stdio.h>
int main() {
    int n, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10; // Get the last digit
        sum += remainder;   // Add it to sum
        n /= 10;           // Remove the last digit from n
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/