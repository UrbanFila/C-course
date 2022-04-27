#include <stdio.h>

int Sum(int n){


    if(n <= 9){
        return n;
    }

    return n % 10 + Sum(n / 10);
}

int main(){

    int num = 0;

    scanf("%d", &num);

    printf("%d\n", Sum(num));

    return 0;
}