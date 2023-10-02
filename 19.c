------------->SUM OF NATURAL NUMBERS USING WHILE LOOP
#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer 'n': ");
    scanf("%d", &n);
    if (n < 1) { 
        printf("Please enter a positive integer.\n");
    } else {
        int i = 1;

        while (i <= n) {
            sum += i;
            i++;
        }

        printf("The sum of natural numbers from 1 to %d is %d.\n", n, sum);
    }
    return 0;
