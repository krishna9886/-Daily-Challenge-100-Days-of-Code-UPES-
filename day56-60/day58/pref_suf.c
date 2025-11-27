//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    printf("Enter number of elements in the array: ");
    int n;
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int answer[n];
    
    for (int i = 0; i < n; i++) {
        answer[i] = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                answer[i] *= nums[j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", answer[i]);
    }
    printf("\n");
    
    return 0;
}

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/