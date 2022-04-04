#include <stdio.h>

float FindAvg(int n1, int n2, int n3){

    float avg = (n1 + n2 + n3) / 3.0;

    return avg;
}

int main(){

    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Average = %f\n", FindAvg(num1, num2, num3));

    return 0;
}