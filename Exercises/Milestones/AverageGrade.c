#include <stdio.h>

int main(){

    printf("Enter your grades: \n");

    int grade1;
    int grade2;
    int grade3;

    scanf("%d %d %d", &grade1, &grade2, &grade3);

    double averageGrade = ((double)grade1 + grade2 + grade3)/3; 

    printf("Your average grade is: %.2lf\n", averageGrade);

    return 0;
}