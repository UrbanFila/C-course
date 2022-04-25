#include <stdio.h>

int main(){

    char fullName[] = "Donald Duck";

    int i = 0;

    while(fullName[i] != '\0'){

        printf("%c", fullName[i]);
        i++;
    }

    printf("\n");

    return 0;
}