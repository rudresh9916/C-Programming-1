
---------->SIZE OF DIFFRENT DATA TYPES IN C
#include<stdio.h>
int main(){
    printf("size of int: %1u bytes\n", sizeof(int));
    printf("size of char: %1u bytes\n", sizeof(char));
    printf("size of float: %1u bytes\n", sizeof(float));
    printf("size of double: %1u bytes\n", sizeof(double));
    printf("size of long int: %1u bytes\n", sizeof(long int));
    printf("size of long long int: %1u bytes\n", sizeof(long long int));
    return 0;
}