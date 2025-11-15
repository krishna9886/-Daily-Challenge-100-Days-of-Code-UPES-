//Q68: Delete an element from an array.
#include <stdio.h>
int main() {
    int n, i, pos, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to delete: ");
    scanf("%d", &key);

    
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] == key) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
        return 1;
    }

    
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/