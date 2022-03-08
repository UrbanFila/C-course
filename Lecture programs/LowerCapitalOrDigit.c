#include <stdio.h>

int main(){

    char c;

    scanf("%c", &c);


    if(c >= 'a' && c <= 'z'){
        printf("Lower case letter\n");
    }
    else if(c >= 'A' && c <= 'Z'){
        printf("Upper case letter\n");
    }
    else if(c >= '0' && c <= '9'){
        printf("Digit\n");
    }
    else{
        printf("Other\n");
    }


    return 0;
}