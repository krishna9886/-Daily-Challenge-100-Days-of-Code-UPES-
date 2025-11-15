//Q65: Search in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            left = mid + 1; 
        else
            right = mid - 1; 
    }
    return -1; // not found
}

int main() {
    int n,key,i;
    printf("Enter number of elements: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter %d elements: ",n);
        for (i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
    printf("Enter element to search: ");
    scanf("%d", &key);

   
    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/