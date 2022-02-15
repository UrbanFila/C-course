#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    if(num > 0){

        printf("Absolute value is %d\n", num);
        
    }
    else{

        printf("Absolute valuse is %d\n", num*(-1));

    }

    return 0;

}