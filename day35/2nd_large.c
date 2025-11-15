//Q69: Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    if (n < 2) {
        printf("Array must have at least two elements\n");
        return 1;
    }

    int first, second;
    first = second = -2147483648; 

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("No second largest element\n");
    } else {
        printf("Second largest element is %d\n", second);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/