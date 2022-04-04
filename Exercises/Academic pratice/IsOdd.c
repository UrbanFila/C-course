#include <stdio.h>

int IsOdd(int n){

    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int  main(){

    int number;

    printf("Enter number: \n");

    scanf("%d", &number);


    int even = IsEven(number);

    if(even == 1){
        printf("Number %d is even\n", number);
    }
    else{
        printf("Number %d is odd\n", number);
    }

    return 0;
}