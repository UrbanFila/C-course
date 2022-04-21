#include <stdio.h>

int main(){

    int array[3] = {1, 3, 2000};
    int array1[3] = {};


    for(int i = 0; i < 3; i++){
        array1[i] = array[i];
    }

    printf("This is Array\n");
    
    for(int i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("This is Arrray1\n");

    for(int i = 0; i < 3; i++){
        printf("%d ", array1[i]);
    }

    printf("\n");

    return 0;
}