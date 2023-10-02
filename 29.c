------------> C PROGRAM TO FIND THE GRADE OF A STUDENT USING SWITCH CASE
#include <stdio.h>

int main() {
    int score;
    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);

    char grade;

    if (score >= 0 && score <= 100) {
        switch (score / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        printf("Grade: %c\n", grade);
    } else {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    }

    return 0;
}