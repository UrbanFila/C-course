#include <stdio.h>

int main(){


    float num;

    scanf("%f", &num);

    int num1 =(int)num;
    float decimal = num - num1;

    printf("%d\n%.2f\n", num1, decimal);

    return 0;
}