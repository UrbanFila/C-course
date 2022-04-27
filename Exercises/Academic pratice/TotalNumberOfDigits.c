#include <stdio.h>

int NumOfNumbers(int n){

    if(n <= 9){
        return 1;
    }

    return 1 + NumOfNumbers(n / 10);
}

int main(){

    int num = 0;

    scanf("%d", &num);

    int counter = NumOfNumbers(num);

    printf("%d\n", counter);

    return 0;
}