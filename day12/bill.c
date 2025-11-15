//Q24: Write a program to calculate an electricity bill based on units consumed.
//Q24: Write a program to calculate an electricity bill based on units consumed.
#include<stdio.h>
#include<math.h>
int main() {
    int units;
    float bill;

    printf("print the number of units consumed: ");
    scanf("%d", &units);

    if(units <=100) {
        bill = units *5;
        printf("Bill: %.2frs\n", bill);
    } else if (units <=200 && units >=100) {
        bill = (100 *5) + ((units -100) *7);
        printf("Bill: %.2frs\n", bill);
    }
    else if (units >200 && units <=300) {
        bill = (100 *5) + (100 *7) + ((units -200) *10);
        printf("Bill: %.2frs\n", bill);
    } else {
        bill = (100 *5) + (100 *7) + (100 *10) + ((units -300) *12);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: rs250

Input 2:
150
Output 2:
Bill: rs950

Input 3:
250
Output 3:
Bill: rs2200

*/