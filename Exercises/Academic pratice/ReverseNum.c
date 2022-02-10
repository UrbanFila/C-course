#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    int digit = 0;
    int reversenum = 0;

    while(num > 0){
        
        digit =  num % 10;

        reversenum = reversenum * 10 + digit;

        num /= 10;
    }

    printf("%d\n", reversenum);

    return 0;
}