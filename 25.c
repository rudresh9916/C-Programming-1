--------------> PALINDROME

#include<stdio.h>
int main(){
    int n1,rev=0,r,num;
    printf("The number is ");
    scanf("%d",&n1);
    num=n1;
    while(num>0){
         r=num%10;
         num=num/10;
         rev=10*rev+r;
    }
    if(rev == n1)
    {
        printf("Number is palidrome");
    }else{
        printf("the reverse is %d",rev);
    }
    return(0);
}
