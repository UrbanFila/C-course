#include <stdio.h>

int main(){

    printf("Insert the size of a sequence\n");

    int size = 0;

    scanf("%d", &size);

    int num1 = 0;
    int num2 = 0;

    int t = 1;

    for(int i = 0; i < size; i++){

        scanf("%d", &num1);

        if(i == 0){

            num2 = num1;

        }
        else if(num2 >= num1){
            t = 0;
            break;
        }
    }

    if(t == 1){
        printf("Very Ascending\n");
    }
    else{
        printf("Not Very Ascending\n");
    }


    return 0;
}