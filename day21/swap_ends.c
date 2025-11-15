//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first_digit, last_digit, middle_part;
    int num_digits = 0, temp, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    temp = n;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
        
    }

    first_digit = temp;             
    last_digit = n % 10;            \
    
    middle_part = (n % power) / 10; 

    int swapped_number = last_digit * power + middle_part * 10 + first_digit;

    printf("%d\n", swapped_number);
    return 0;

}
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
