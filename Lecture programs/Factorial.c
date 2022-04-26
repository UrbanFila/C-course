#include <stdio.h>

int Factorial(int n){

    if(n == 1){
        return 1;
    }

    return n * Factorial(n - 1);
}

int main(){

    int num = 0;

    scanf("%d", &num);

    int rez = Factorial(num);

    printf("Factorial  is %d\n", rez);

    return 0;
}