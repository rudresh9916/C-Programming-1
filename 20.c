--------->MULTIPLICATION TABLE OF ANY INTEGER
#include<stdio.h>
int main(){
    int N;
    printf("Enter The number :");
    scanf("%d", &N);
    printf("MULTIPLICATION TABLE OF %d", &N);
    for (int i=1; i <= 10; i++){
        printf("%d * %d = %d\n", N, i, N * i); 
    }
    return 0;
}