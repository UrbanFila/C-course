#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x1;
    float x2;
    float y1;
    float y2;

    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

    float Distance = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2) * (y1 - y2)));

    printf("%.2f\n", Distance);

    return 0;
}