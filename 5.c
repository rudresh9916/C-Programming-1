-------->CALCULATING PERCENTAGES
#include<stdio.h>
int main(){

    int subject1, subject2, subject3, subject4, subject5;
    int totalmarks, percentage;


    printf("enter subject1 marks");
    scanf("%d", &subject1);
    printf("enter subject2 marks");
    scanf("%d", &subject2);
    printf("enter subject3 marks");
    scanf("%d", &subject3);
    printf("enter subject4 marks");
    scanf("%d", &subject4);
    printf("enter subject5 marks");
    scanf("%d", &subject5);

    totalmarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalmarks / (5*100)) * 100;
    printf("PERCENTAGE AQQUIRED : %d\n", percentage);
    return 0;
}
