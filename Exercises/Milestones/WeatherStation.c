#include <stdio.h>

int main(){

    double Cdegree;

    printf("Enter Temperature in Celsius: \n");
    scanf("%lf", &Cdegree);

    double fahrenheit = (Cdegree * 1.8) + 32;

    printf("Temperature in Fahrenheit is: %lf\n", fahrenheit);

    return 0;
}