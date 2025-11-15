//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The lengths form a valid triangle.\n");
    }if (a==b && b==c) {
            printf("the traingle is equilateral.\n");
    }if (a!=c && b!=c && a!=b) {
            printf("the triangle is scalene.\n");
            if ((a^2 + b^2) == c^2 || (b^2 + c^2) == a^2 || (c^2 + a^2) == b^2) {
                printf("the triangle is also a right angled triangle.\n");
            }
        }if (a==b || b==c || a==c) {
            printf("the triangle is isosceles.\n");
            
    }

    return 0;      
}