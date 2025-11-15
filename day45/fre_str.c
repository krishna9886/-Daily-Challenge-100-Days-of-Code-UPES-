//Q89: Count frequency of a given character in a string.
#include<stdio.h>
int main() {
    char str[200];
    char alap;
    int freq=0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to find frequency: ");
    scanf("%c", &alap);

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==alap) {
            freq++;
        }
    }
    printf("Frequency of '%c': %d\n", alap, freq);
    return 0;
}

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/