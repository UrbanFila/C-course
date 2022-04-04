#include <stdio.h>

int MaximumDigit(int n){

    int n1 = 0;
    int n2 = 0;

    for(int i = 0; i < 2; i++){

        if(i == 0){
            n1 = n % 10;
        }
        else{
            n2 = n;
        }
        n /= 10;
    }

    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

void NumOfDigits(int n){

    int counter = 0;
    int cifra = n;

    while(cifra > 0){
        
        cifra = cifra / 10;
        counter++;
    }

    if(counter == 2){
        printf("Max digit is %d\n", MaximumDigit(n));
    }
    else{
        printf("ERROR\n");
    }
}

int main(){

    int num = 0;

    printf("Enter number:\n");

    scanf("%d", &num);

    NumOfDigits(num);

    return 0;
}