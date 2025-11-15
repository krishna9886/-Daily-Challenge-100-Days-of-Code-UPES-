//Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main() {
    int n, original, reversed = 0, remainder;
    printf(" enter a number:");
    scanf("%d", &n);

    original=n;
    while(n!=0) {
        remainder=n%10;  // get the last digit 
        reversed=reversed*10+remainder; // append it to the reversed number
        n/=10; // remove the last digit from n
    }
    if(original==reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");

    
}
    return 0;
}
/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/