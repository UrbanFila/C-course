#include <stdio.h>

int main(){

    int initalterm;

    printf("What is your intial term?\n");
    scanf("%d", &initalterm);
    
    int totalElements;

    printf("What is the number of the total elements in the sequence?\n");
    scanf("%d", &totalElements);

    int nterm;

    printf("What is the nterm?\n");
    scanf("%d", &nterm);

    double sum = (initalterm + nterm)*((double)totalElements/2);

    printf("The sum is %.2lf\n", sum);

    return 0;
}