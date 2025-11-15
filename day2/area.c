//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h> 
int main() {
    int length, breadth;
    int area, perimeter;

    printf("enter length of rectangle: ");
    scanf("%d", &length);
    printf("enter breadth of rectangle: ");
    scanf("%d", &breadth);
    
    printf("area = %d and perimeter = %d\n",(length*breadth), 2*(length +breadth) );
    return 0;


}
/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/