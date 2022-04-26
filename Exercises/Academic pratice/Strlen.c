#include <stdio.h>

int Stlen(char *p){
    int counter = 0;

    int i = 0;

    while(p[i] != '\0'){

        counter++;
        i++;
    }

    return counter;
}

int main(){

    char str[] = "Hello World!";


    printf("Lenght is %d\n", Stlen(str));

    return 0;
}