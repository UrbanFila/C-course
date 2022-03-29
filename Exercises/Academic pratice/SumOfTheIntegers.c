#include <stdio.h>

int main(){

    printf("Insert a number:\n");

    int num = 0;
    int sum = 0;;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){ 
        sum += i; 
    }

    printf("Sum is %d\n", sum);

    return 0;           
}