#include <stdio.h>

void Factorial(int n){

    int f = 1;

    for(int i = 1; i <= n; i++){

        f = f * i;

    }

    printf("Factorial is: %d\n", f);
}

int main(){

    int number = 0;

    printf("Enter number: \n");

    scanf("%d", &number);

    Factorial(number);

    return 0;
}