//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main() {
    int year;
    printf("enter your year : " ,year );
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)) {  // the formula could be shortened but due to 
        printf("it is a leap year\n");                           // 1900 year as it is divisible by 4 but not a leap year
    } else {
        printf("Not a leap year\n");    

    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/