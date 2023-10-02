---------------->FIBONACCI SERIES IN C USING WHILE LOOP
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    } else if (n == 2) {
        printf("Fibonacci Series: %d, %d\n", first, second);
    } else {
        printf("Fibonacci Series: %d, %d, ", first, second);
        i = 3;

        do {
            next = first + second;

            printf("%d, ", next);

            first = second;
            second = next;

            i++;
        } while (i <= n);

        printf("\n");
    }

    return 0;
}
