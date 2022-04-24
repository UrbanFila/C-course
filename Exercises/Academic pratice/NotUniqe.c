#include <stdio.h>

int main(){

    int array[10];


    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    
    int counter = 0;

    for(int i = 0; i < 10; i++){
        
        for(int j = 0; j < i; j++){

            if(array[j] == array[i] && j != i){
                counter++;
            }
        }
    }

    printf("Number of non-uniqe values in an array is %d\n", counter);
    
    return 0;
}