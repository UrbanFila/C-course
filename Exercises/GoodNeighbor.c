#include <stdio.h>
#define SIZE 5;

int main(){

    int array[SIZE];
    int noGood == 0;
    
    for(int i = 0; i < SIZE; i++){
        
        pritnf("Enter value %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < SIZE - 1; i++){

        if(array[i] == array[i - 1] * array[i+1]){
            printf("This array has a good neighbors!\n");
            noGood = 1;
        }
    }

    if(noGood == 0){
        printf("This array doesnt have good neighbors!\n");
    }
    return 0;
}