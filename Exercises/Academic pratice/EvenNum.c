#include <stdio.h>

int main(){

    printf("Insert number of even numbers: \n");

    int num = 0;

    scanf("%d", &num);

    int even = 2;

    for(int i = 0; i < num; i++){

        printf("%d ", even);
        even += 2;
    }

    printf("\n");

    return 0;
}