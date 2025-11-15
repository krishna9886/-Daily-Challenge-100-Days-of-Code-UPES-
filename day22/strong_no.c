//Q43: Write a program to check if a number is a strong number.
#include<stdio.h>//a positive integer that equals the sum of the factorials of its digits
int main() {
    int n, original, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        digit = n % 10;
        fact = 1;

        // Calculate factorial of the digit
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact; // Add factorial to sum
        n /= 10; // Remove last digit
    }

    if (sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;

}
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/