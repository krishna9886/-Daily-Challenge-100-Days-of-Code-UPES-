//Q82: Print each character of a string on a new line.
#include<stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/