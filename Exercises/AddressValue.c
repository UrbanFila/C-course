#include <stdio.h>

int main(){

    int grade1 = 10;
    int grade2 = 9;

    printf("%d\n", grade1);
    printf("%d\n", grade2);

    printf("Address of grade1: %p\n", &grade1);
    printf("Address of grade2: %p\n", &grade2);

    return 0;
}