#include <stdio.h>

float AreaOfRectangle(float h, float w){

    float a = w * h;

    return a;
}

int main(){

    float wid, hei;

    printf("Enter height:\n");

    scanf("%f", &hei);

    printf("Enter width:\n");

    scanf("%f", &wid);

    float area = AreaOfRectangle(hei, wid);

    printf("Area of rectangle is %f\n", area);

    return 0;
}