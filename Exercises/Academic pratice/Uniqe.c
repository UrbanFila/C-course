#include <stdio.h>

int main(){

    int array[10];


    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    
    int flag = 0;
    int counter = 0;


    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10; j++){
            
            if(array[i] == array[j] && j != i){
                flag = 1;
            }
        }

        if(flag == 1){
            	
        }
        else{
            printf("%d is a unique element\n", array[i]);
            counter++;
        }

        flag = 0;
    }

    printf("Number of all uniqe elements in an array is %d\n", counter);

    return 0;
}