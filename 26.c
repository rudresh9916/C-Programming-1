------------>COUNT THE NUMBER OF DIGITS OF AN INTEGER USING WHILE LOOP 
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);

    return 0;
}