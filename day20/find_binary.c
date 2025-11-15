//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main() {
    int n, remainder, ones_complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int original = n; // Store the original number for output formatting
    int is_binary = 1; // Flag to check if the input is a valid binary number
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        if (remainder != 0 && remainder != 1) {
            is_binary = 0; // Not a binary number
            break;
        }
        // Flip the bit: 0 becomes 1, 1 becomes 0
        ones_complement += (1 - remainder) * place;
        place *= 10; // Move to the next place value
        n /= 10; // Remove the last digit from n
    }
    if (!is_binary) {
        printf("Invalid binary number.\n");
    } else {
        // Print leading zeros if any
        int leading_zeros = 0;
        while (original > 0 && original % 10 == 0) {
            leading_zeros++;
            original /= 10;
        }
        for (int i = 0; i < leading_zeros; i++) {
            printf("0");
        }
        printf("%d\n", ones_complement);
    }
    return 0;
}

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/