----->C Program to Find Area and Circumference of Circle


#include <stdio.h>
#define PI 3.14

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    
    printf("Area of the circle: %f square units\n", area);
    printf("Circumference of the circle: %f units\n", circumference);

    return 0;
}