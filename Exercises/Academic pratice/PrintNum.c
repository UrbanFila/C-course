#include <stdio.h>

int main(){

    printf("Insert a number:\n");

    int num = 0;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){ 
        printf("%d ",i);
    }

    printf("\n");

    for(int i = num; i >= 1; i--){
        printf("%d ", i);
    }

    printf("\n");

    return 0;           
}