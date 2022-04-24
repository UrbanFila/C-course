#include <stdio.h>


int sumOfArray(int *parray, int size){

    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + parray[i];
    }

    return sum;
}

int main(){

    int array[3] = {1, 3, 10};
    int size = 3;

    printf("%d\n", sumOfArray(array, size));

    return 0;
}