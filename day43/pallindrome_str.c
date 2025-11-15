//Q86: Check if a string is a palindrome.
#include<stdio.h>
int main() {
    char str[200], reversed[200];
    int len = 0;
    printf("Enter a string: ");
    gets(str);      

    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    for(int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; 
    if (strcmp(str, reversed) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    
    return 0;
}
/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/