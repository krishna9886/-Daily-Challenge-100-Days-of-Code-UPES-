//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
int main() {
    int m, n, i, j, flag = 1;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                for (int k = i + 1; k < m; k++) {
                    if (a[i][j] == a[k][k]) {
                        flag = 0;
                        break;
                    }
                }
            }
        }
    }
    if (flag == 1) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;

}
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/