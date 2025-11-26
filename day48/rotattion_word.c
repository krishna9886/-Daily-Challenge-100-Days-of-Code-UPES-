//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char str2[200];

    printf("Enter first string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) return 0;

    int len1 = 0, len2 = 0;
    while (str[len1] != '\0' && str[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    str[len1] = '\0';
    str2[len2] = '\0';

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char temp[400];
    temp[0] = '\0';
    strcat(temp, str);// if str = "abcde", after these lines temp = "abcdeabcde". 
                      //The rotated string "deabc" appears inside "abcdeabcde",
                      // so str2 would be found.


    strcat(temp, str);

    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");               
    } else {
        printf("Not rotation\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/