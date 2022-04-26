#include <stdio.h>

int Sum(int num){

    if(num == 1){
        return 1;
    }

    return num + Sum(num - 1);
}

int main(){

    int n = 0;

    scanf("%d", &n);

    int rez = Sum(n);

    printf("Sum is %d\n", rez);


    return 0;
}