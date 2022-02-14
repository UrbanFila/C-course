#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b & a > c){

        if(b > c ){

            printf("Maximum is %d, minimum is %dq\n", a, c);

        }
        else{

            printf("Maximum is %d, minimum is %d\n", a, b);
        }

    }
    else if(b > a && b > c){

        if(a > c){
            printf("Maximum is %d, minimum is %d\n", b, c);
        }
        else{
            printf("Maximum is %d, minimum is %d\n", b, a);
        }
    }
    else if(c > a && c > b){

        if(a > b){
            printf("Maximum is %d, minimum is %d\n", c, b);
        }
        else{
            printf("Maximum is %d, minimum is %d\n", c, a);
        }

    }

    return 0;
}