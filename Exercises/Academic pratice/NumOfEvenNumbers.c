#include <stdio.h>

int TotalOfEven(int num){

    printf("Please enter a number: ");

    int input = 0;
    scanf("%d", &input);

    if(input == -1){
        return 0;
    }

    if(input % 2 == 0){
        return 1 + TotalOfEven(num); 
    }

    return TotalOfEven(num);
}

int main(){

    int num = 0;

    scanf("%d", &num);

    int total = TotalOfEven(num);

    printf("%d\n", total);

    return 0;

}