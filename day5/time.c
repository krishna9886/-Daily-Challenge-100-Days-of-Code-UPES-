//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    
    int total_sec;
    printf("Enter time in seconds:");
    scanf("%d", &total_sec);

    int hours = total_sec / 3600;
    int minutes = (total_sec% 3600) / 60;
    int seconds = total_sec % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
}
/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/