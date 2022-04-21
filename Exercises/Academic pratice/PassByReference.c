#include <stdio.h>

int findMaxMin(int num1, int num2, int *pmax, int *pmin){

    if(num1 > num2){

        *pmin = num2;
        *pmax = num1;
    }
    else{

        *pmin = num1;
        *pmax = num2;
    }
}

int main(){

    int a = 5;
    int b = 7;

    int max = 0;
    int min = 0;

    findMaxMin(a,b, &max, &min);

    printf("max is %d\n", max);
    printf("min is %d\n", min);
}