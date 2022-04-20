#include <stdio.h>

int main(){

    int array[7] = {1, 4, 0, 2, 9, 4, 5};

    int currentNum = 0;
    int max = -1;
    int maxIndex = 0;
   

    for(int i = 0; i < 7; i++){

        currentNum = array[i];

        if(currentNum > max){
            max = currentNum;
            maxIndex = i;
        }
    }

    printf("Max is %d\n", max);
    printf("Max index is %d\n", maxIndex);

    return 0;
}