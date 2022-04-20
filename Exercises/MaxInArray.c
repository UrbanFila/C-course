#include <stdio.h>

int main(){

    int array[7] = {1, 4, 0, 2, 9, 4,5};

    int currentNum = 0;
    int max = -1;
   

    for(int i = 0; i < 7; i++){

        if(currentNum > max){
            max = currentNum;
            maxIndex = i;
        }

        currentNum = array[i];

    }

    printf("Max is %d\n", max);

    return 0;
}