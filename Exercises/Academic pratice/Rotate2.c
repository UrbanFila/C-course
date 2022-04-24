#include <stdio.h>
#define N 2

int main(){

    int array[4] = { 5 , 4, 7, 3};

    for(int i = 0; i < N; i++){
        
        int first = 0;
        first = array[0];

        for(int j = 1; j < 4; j++){
            array[j - 1] = array[j];
        }

        array[3] = first;
    }

    for(int i = 0; i < 4; i++){
        printf("%d ", array[i]);
    }

       printf("\n");

    return 0;
}