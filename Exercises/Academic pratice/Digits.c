#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    int counter = 0;

    while(num >= 1){

        num /= 10;
        counter++;
    }

    if(counter == 2){

        printf("Two digits\n");

    }
    else if(counter == 3){

        printf("Three digits\n");

    }

    return 0;
}