----------->CHECKING MONTHS USING IF-ELSE
#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter the date (1-31): ");
    scanf("%d", &day);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a month between 1 and 12.\n");
    }
    else if (day < 1 || (day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) ||
                          (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) ||
                          (day > 29 && month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))) {
        printf("Invalid day for the given month.\n");
    }

    else if (year < 1) {
        printf("Invalid year. Please enter a positive year.\n");
    }

    else {
        printf("The date %d-%d-%d is a valid date.\n", day, month, year);
    }

    return 0;
}