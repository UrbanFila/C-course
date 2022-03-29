#include <stdio.h>

int main(){

    printf("Insert integer: \n");

    int num = 0;
    int multi = 0;
    int m = 0;

    scanf("%d", &num);

    printf("Insert multiplicator: \n");

    scanf("%d", &multi);

    for(int i = 1; i <= multi; i++){

        m =  num * i;

        printf("%d * %d = %d\n", num, i, m);
    }

    return 0;
}