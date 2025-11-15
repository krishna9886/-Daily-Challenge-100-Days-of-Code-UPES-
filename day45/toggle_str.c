//Q90: Toggle case of each character in a string.
#include<stdio.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') {
            str[i] = ch - ('a' - 'A'); // Convert to uppercase
        } else if(ch >= 'A' && ch <= 'Z') {
            str[i] = ch + ('a' - 'A'); // Convert to lowercase
        }
    }
    printf("%s\n", str);
    return 0;
}
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/