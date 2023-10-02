
----------->ASSIGN POWERS TO THE INTEGERS
#include <stdio.h>

int main() {
    int n;
    
    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Initialize variables to store the powers
    int power1 = n;
    int power2 = n * n;
    int power3 = n * n * n;

    // Display the first three powers
    printf("%d^1 = %d\n", n, power1);
    printf("%d^2 = %d\n", n, power2);
    printf("%d^3 = %d\n", n, power3);

    return 0;
}
