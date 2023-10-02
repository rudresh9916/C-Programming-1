
------>CELCIUS TO FARENHIET
#include<stdio.h>
int main()
{
int celcius, farenhiet;
    printf("enter temperature in celcius");
    scanf("%d", &celcius);
    farenhiet = (celcius * 9/5) + 32;
    printf("%2d\n is equal to %2d\n farenheit\n", celcius, farenhiet);
    return 0;
    }
