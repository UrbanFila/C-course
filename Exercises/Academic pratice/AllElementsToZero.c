#include <stdio.h>

void resetToZero(int *parray, int s){

    for(int i = 0; i < s; i++){
        parray[i] = 0;
    }

}

int main(){

    int array[3] = {1, 3, 10};

    printf("Before reset: ");
    
    for(int i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    resetToZero(array, 3);

    printf("After reset: ");

    for(int i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}