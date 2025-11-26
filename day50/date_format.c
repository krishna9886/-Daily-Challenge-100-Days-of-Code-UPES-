//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char str[20];
    printf("Enter date in dd/mm/yyyy format: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

   
    char day[3], month[3], year[5];
    day[0] = str[0];
    day[1] = str[1];
    day[2] = '\0';
    month[0] = str[3];
    month[1] = str[4];
    month[2] = '\0';
    year[0] = str[6];
    year[1] = str[7];
    year[2] = str[8];
    year[3] = str[9];
    year[4] = '\0';

    // Convert month number to month abbreviation
     char *month_abbr;
     int month_num = (month[0] - '0') * 10 + (month[1] - '0');
    switch (month_num) {
        case 1: month_abbr = "Jan"; break;
        case 2: month_abbr = "Feb"; break;
        case 3: month_abbr = "Mar"; break;
        case 4: month_abbr = "Apr"; break;
        case 5: month_abbr = "May"; break;
        case 6: month_abbr = "Jun"; break;
        case 7: month_abbr = "Jul"; break;
        case 8: month_abbr = "Aug"; break;
        case 9: month_abbr = "Sep"; break;
        case 10: month_abbr = "Oct"; break;
        case 11: month_abbr = "Nov"; break;
        case 12: month_abbr = "Dec"; break;
        default: month_abbr = "Invalid"; break;
    }


    if (strcmp(month_abbr, "Invalid") != 0) {
        printf("%s-%s-%s\n", day, month_abbr, year);
    }
     else {
        printf("Invalid date format\n");
    }

    return 0;
}

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/