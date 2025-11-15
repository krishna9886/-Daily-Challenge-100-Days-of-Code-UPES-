//Q85: Reverse a string.
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

    printf("%s\n", reversed);
    return 0;
}

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/