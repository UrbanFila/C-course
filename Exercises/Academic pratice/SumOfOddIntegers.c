#include <stdio.h>

int main(){

    printf("Enter the size of a sequence\n");

    int num = 0;

    scanf("%d", &num);

    int sumodd = 0;

    for(int i = 0; i < num; i++){
        int value = 0;

        scanf("%d", &value);

        if(value % 2 != 0){
            sumodd += value;
        }
    }
       
    printf("The sum is %d\n", sumodd);

    return 0;                                                                                   
}