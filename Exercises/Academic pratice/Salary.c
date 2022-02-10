#include <stdio.h>

int main(){

    int hours;

    printf("How many hours did you work?\n");
    scanf("%d", &hours);

    double rate;

    printf("What is your rate?\n");
    scanf("%lf", &rate);
    double salary = rate * hours;

    printf("Your total salary is %.2lf\n", salary);

    return 0;
}