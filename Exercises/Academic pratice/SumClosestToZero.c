#include <stdio.h>

int main(){

    int array[4] = {-1, 2, 3, -6};

    int sum = 3;
    int minSum = 3;
    int one = 0;
    int two = 0;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            sum = array[i] + array[j];

            if(sum < 0){

                sum = sum * (-1);
            }

            if(sum < minSum){
                minSum = sum;
                one = array[i];
                two = array[j];
            }
        }
    }

    printf("Closest to zero is: %d %d %d\n", one, two, minSum);

    return 0;
}