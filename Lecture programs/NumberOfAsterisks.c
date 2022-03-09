#include <stdio.h>


int main(){

    int number;

    scanf("%d", &number);

    while(number > 0){

        printf("*\n");

        number--;
    }

    return 0;
}