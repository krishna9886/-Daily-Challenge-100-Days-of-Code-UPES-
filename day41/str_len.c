//Q81: Count characters in a string without using built-in length functions.
#include<stdio.h>
int main() {
    char str[200];
    int len=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++) {
        len++;
    }
    printf("Length of the string: %d\n", len);
    return 0;
}
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/