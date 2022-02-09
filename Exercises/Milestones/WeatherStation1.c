#include <stdio.h>

int main(){

    double Fdegree;

    printf("Enter Temperature in Fahrenheit: \n");
    scanf("%lf", &Fdegree);

    double celsius = (Fdegree - 32) / 1.8;

    printf("Temperature in Celsius is: %lf\n", celsius);

    return 0;
}