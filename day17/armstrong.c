//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h> //  The number is the result of adding its digits,
 #include<math.h>  // with each digit raised to the power of the total count of digit


int main() {
    int n, temp, remainder, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of each digit raised to 'digits'
    while (temp != 0) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum = sum + power;
        temp = temp / 10;
    }

    // Check Armstrong condition
    if (sum == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/