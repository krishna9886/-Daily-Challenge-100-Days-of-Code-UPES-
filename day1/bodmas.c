//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter the value of a: ");
    scanf("%d", &a);    
    printf("Enter the value of b: ");
    scanf("%d", &b);    

    sum = a + b;
    difference = a - b;
    product = a * b;
    printf("The sum of a and b is %d\n", sum);
    printf("The difference of a and b is %d\n", difference);
    printf("The product of a and b is %d\n", product);

    if (b !=0) {
        quotient = (float)a / b;
        printf("The quotient of a and b is %d\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

       
    return 0;
}
