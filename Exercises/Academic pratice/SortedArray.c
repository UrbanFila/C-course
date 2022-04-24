#include <stdio.h>

//{1,2,2,5,10}
//{1,2 ,5 , 3, 10}
//{1, 2, 5, 7, 10}

int main(){

    int array[5] = {1, 2, 2, 5, 10};
    int flag = 0;

    for(int i = 0; i < 5; i++){

        if(i != 5-1){

            if(array[i] < array[i+1]){

            }
            else if(array[i] <= array[i+1]){
                flag = 1;
            }
            else if(array[i] > array[i + 1]){
                flag = 2;
                break;
            }

        }
        else{

            if(array[i] < array[i+1]){

            }
            else if(array[i] <= array[i+1]){
                flag = 1;
            }
            else if(array[i] > array[i + 1]){
                flag = 2;
            }
        }
    }

    if(flag == 0){
        printf("Array is really sorted\n");
    }
    else if(flag == 1){
        printf("Array is sorted\n");
    }
    else{
        printf("Array is not sorted\n");
    }

    return 0;
}