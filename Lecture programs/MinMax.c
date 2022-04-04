#include <stdio.h>

void MinMax(int num1, int num2){

    if(num1 > num2){

        printf("First number is max -> %d\n", num1);
        printf("Second number is min -> %d\n", num2);

    }
    else{
        
        printf("Second number is max -> %d\n", num2);
        printf("First number is min -> %d\n", num1);
    }               
}

int main(){

    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    MinMax(a, b);

    return 0;
}