-------------->REVERSE A NUMBER USING FOR LOOP
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;