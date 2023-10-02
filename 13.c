
---------> FIND GREATER NUMBER
#include<stdio.h>
int main(){
    int num1, num2;
    printf("enter the first number:");
    scanf("%d", &num1);
     
    printf("enter the second number:");
    scanf("%d", &num2);
     if (num1 > num2){
     printf("num1 is greater");}
     else if (num2 > num1){
     printf("num2 is greater");}
     else {
     printf("both numbers are equal");}
     return 0;
}