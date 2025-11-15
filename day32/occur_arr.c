//Q64: Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main() {
    int n, count[10] = {0}, i, maxCount = 0, freq_dig;
    printf("Enter an integer number: ");
    scanf("%d", &n);


    while (n != 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            freq_dig = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", freq_dig);
    return 0;
}
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/