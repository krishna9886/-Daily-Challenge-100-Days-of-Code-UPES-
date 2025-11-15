//Q51: Write a program to print the following pattern:
  
#include <stdio.h>

int main() {
    int i, j, stars;

    for (i = 1; i <= 5; i++) {
        if (i == 1 || i == 5)
            stars = 1;
        else if (i == 2 || i == 4)
            stars = 3;
        else if (i == 3)
        stars = 5;

        for (j = 0; j < stars; j++) {
            printf("*");
        }

        if (i != 5)
            printf("\n");
    }

    return 0;
}

