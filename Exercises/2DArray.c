#include <stdio.h>

int main(){

    int array [2][3] = { {1, 5, 9}, {2, 6, 10}};
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", array[i][j]);
        }
    }

    printf("\n");

    return 0;
}