#include <stdio.h>

int main(){

    int num, pow;

    scanf("%d %d", &num, &pow);

    int res = 1;

    for(int i = 0; i < pow; i++){

        res = res * num;

    }

    printf("%d\n", res);


    return 0;
}