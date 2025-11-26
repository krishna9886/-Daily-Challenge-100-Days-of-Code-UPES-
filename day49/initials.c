//Q97: Print the initials of a name.
#include <stdio.h>

int main() {
    char str[200];
    printf("Enter your name: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int i = 0;
   
    while (str[i] == ' ') i++;

    
    if (str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if (c >= 'a' && c <= 'z') c -= 'a' - 'A';
        printf("%c.", c);
    }

    
    for (; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            char c = str[i+1];                
            if (c >= 'a' && c <= 'z') c -= 'a' - 'A';
            printf("%c.", c);
        }
    }

    printf("\n");
    return 0;
}
    
/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/