#include <stdio.h>


void Seq(int l){

    for(int i = 0; i < l; i++){

        printf("9");
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