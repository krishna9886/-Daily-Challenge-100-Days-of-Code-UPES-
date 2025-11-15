//Q61: Search for an element in an array using linear search.
#include<stdio.h>
int main() {
    int num, x, i, found = 0;
    printf("enter the number of elements you want:");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    printf("which value in arr you want to find:");
    scanf("%d", &x);

    for (i = 0; i < num; i++) {
        if (arr[i] == x) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("-1\n");
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/