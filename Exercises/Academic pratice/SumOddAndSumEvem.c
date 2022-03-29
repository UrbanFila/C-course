#include <stdio.h>

int main(){

    printf("Insert a number: \n");

    int num = 0;

    scanf("%d", &num);

    int sumodd = 0;
    int sumeven = 0;

    while(num > 0){

        int integer = num % 10;

        if(integer % 2 == 0){
            sumeven += integer;
        }
        else{
            sumodd += integer;
        }

        num /= 10;
    }

    int r = sumeven - sumodd;

    printf("%d\n", r);

    return 0;
}