#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

int main(){

    int array[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            array[i][j] = i*j;
        }
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%5d ", array[i][j]);
        }
        printf("\n");
    }





    return 0;
}