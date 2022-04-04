#include <stdio.h>

void Seq(int l){


    if(l <= 9){

        for(int i = 1; i <= l; i++){

            printf("%d", i);
        }
    }
    else{

        for(int i = 1; i <= l; i++){

            printf("9");
        }

    }

    printf("\n");
}

int main(){

    int length = 0;

    printf("Length is:\n");

    scanf("%d", &length);

    Seq(length);

    return 0;
}