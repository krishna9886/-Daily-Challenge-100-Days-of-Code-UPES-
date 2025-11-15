//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int  main() {
    int radius;
    float area, circumference;
    

    printf("enter radius of circle: ");
    scanf("%d", &radius);  

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;    

    printf("area = %f and circumference = %f \n", area, circumference);
    return 0;
}
/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/