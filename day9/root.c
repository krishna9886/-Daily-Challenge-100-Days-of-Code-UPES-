//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main() {
    int a, b ,c ;
    float root1, root2, realPart, imagPart, D;
    printf("enter the value of a : ", a);   
    scanf("%d", &a);

    printf("enter the value of b : ", b);
    scanf("%d", &b);

    printf("enter the value of c : ", c);
    scanf("%d", &c);

    D = b*b - 4*a*c;
    if (D>0) {
        root1 =( -b + sqrt(D)) / (2*a);
        root2 =( -b - sqrt(D)) / (2*a);
        printf("roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (D==0) {
        root1 = root2 = -b / (2*a);
        printf("roots are real and same: %.0f\n", root1);
    } else {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("roots are complex: %.0f + %.0fi and %.0f - %.0fi\n", realPart, imagPart, realPart, imagPart);

    }
    return 0;
    }
/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/