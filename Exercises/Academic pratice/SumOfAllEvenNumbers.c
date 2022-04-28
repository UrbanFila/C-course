#include <stdio.h>

int SumOfAllEvenNumbers(int n){

    if(n == -1){
        return 0;
    }
    else if(n % 2 == 0){

        int number = n;
       
        scanf("%d", &n);
        return number + SumOfAllEvenNumbers(n);

    }
    else{

        scanf("%d", &n);
        return SumOfAllEvenNumbers(n);
    }
}

int main(){

    int num = 0;

    scanf("%d", &num);

    int sum = SumOfAllEvenNumbers(num);

    printf("Sum is %d\n", sum);

    return 0;
}