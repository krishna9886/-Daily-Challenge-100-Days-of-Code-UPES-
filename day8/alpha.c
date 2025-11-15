//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main() {
    char alph;
    printf("enter your character : ", alph);
    scanf("%c", &alph);

    if(alph >= 'A' && alph <= 'Z') {
        printf("Uppercase alphabet\n");
    } else if(alph >= 'a' && alph <= 'z') {
        printf("Lowercase alphabet\n");
    } else if(alph >= '0' && alph <= '9') {
        printf("Digit\n");
    } else {
        printf("special character\n");

    }
    return 0;
    
}
/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/