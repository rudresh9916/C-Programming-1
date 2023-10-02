-------->TO CALCULATE INTEREST 
#include<stdio.h>
int main(){
    float principle, rate, time, intrest;
    printf("Enter the principle amount:");
    scanf("%f", &principle);
    printf("Enter rate:");
    scanf("%f", &rate);
    printf("Enter time taken:");
    scanf("%f", &time);    
intrest= (principle * rate *time);
    printf("intrest is: %f\n", intrest);
    return 0;
}