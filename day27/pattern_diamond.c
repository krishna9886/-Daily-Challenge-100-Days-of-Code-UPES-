//Q54: Write a program to print the following pattern:
#include<stdio.h>
int main() {
    int i, j, stars, spaces;

    for (i = 1; i <= 7; i++) {
        if (i == 1 || i == 7)
            stars = 1;
        else if (i == 2 || i == 6)
            stars = 3;
        else if (i == 3 || i == 5)
            stars = 5;
        else if (i == 4)
            stars = 7;

        spaces = (7 - stars) / 2;

        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/