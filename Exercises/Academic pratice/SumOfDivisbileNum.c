#include <stdio.h>

int main(){

    printf("Insert the number\n");

    int num = 0;

    scanf("%d", &num);

    int sum = 0;

    for(int i = 3; i <= num; i++){
        
        if(i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
    }

    printf("The sum is %d\n", sum);

    return 0;
}
