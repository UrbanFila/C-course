#include <stdio.h>

int main(){

    int array[4] = {5, 4, 7, 3};

    int first = 0;
    first = array[0];

    for(int i = 1; i < 4; i++){
        array[i - 1] = array[i];
    }

    array[3] = first;

    for(int i = 0; i < 4; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}