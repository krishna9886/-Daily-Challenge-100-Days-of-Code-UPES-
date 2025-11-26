//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    int i, j, k;

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for (j = i; str[j] != '\0' && str[j] != '\n'; j++) {
            for (k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar(',');
        }
    }
    putchar('\n');
    return 0;

}
/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/