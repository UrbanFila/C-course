#include <stdio.h>

void MinMax(int num1, int num2, int num3){

    if(num1 > num2 && num1 > num3){

        printf("First number is max -> %d\n", num1);

        if(num2 > num3){

            printf("Second number is middle -> %d\n", num2);
            printf("Third number is min -> %d\n", num3);
        }
        else{

            printf("Third number is middle -> %d\n", num3);
            printf("Second number is min -> %d\n", num2);
        }
    }
    else if(num2 > num1 && num2 > num3){
        printf("Second number is max -> %d\n", num2);

        if(num1 > num3){

            printf("First number is middle -> %d\n", num1);
            printf("Third number is min -> %d\n", num3);
        }
        else{

            printf("Third number is middle -> %d\n", num3);
            printf("First number is min -> %d\n", num1);
        }
    }
    else if(num3 > num1 && num3 > num2){

        printf("Third number is max -> %d\n", num3);

        if(num1 > num2){

            printf("First number is middle -> %d\n", num1);
            printf("Secondnumber is min -> %d\n", num2);
        }
        else{
            printf("Second number is middle -> %d\n", num2);
            printf("First number is min -> %d\n", num1);
        }
    }              
}

int main(){

    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d", &a, &b, &c);

    MinMax(a, b, c);

    return 0;
}