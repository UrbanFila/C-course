#include <stdio.h>

int TotalCounter(int n){
    
    printf("Pleas enter a number: ");
    
    int input = 0;
    scanf("%d", &input);

    if(input == -1){
        return 0;
    }
    else if(input < n){
        return 1 + TotalCounter(n);
    }

    return TotalCounter(n);
}


int main(){

    int num = 0;

    scanf("%d", &num);

    int total = TotalCounter(num);

    printf("%d\n", total);

    return 0;
}