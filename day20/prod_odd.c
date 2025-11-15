//Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main() {
    int n, product = 1, remainder, has_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10; // Get the last digit
        if (remainder % 2 != 0) { // Check if it's odd
            product *= remainder; // Multiply it to product
            has_odd = 1; // Mark that we found at least one odd digit
        }
        n /= 10; // Remove the last digit from n
    }

    if (!has_odd) {
        product = 1; // If no odd digits were found, set product to 1
    }

    printf("Product of odd digits: %d\n", product);
    return 0;
}
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/