#include <stdio.h>

int main(){

    int term;
    int a1;

    printf("What is the value of term?\n");
    scanf("%d", &term);

    printf("What is the value of the first term?\n");
    scanf("%d", &a1);

    int d;

    printf("What is the d?\n");
    scanf("%d", &d);

    int an = a1 + (term -1) * d;

    printf("Your term is %d!\n", an);

    return 0;
}