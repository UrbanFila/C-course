#include <stdio.h>

int TotalNumOfChar(char s){

    printf("Insert charachter: \n");

    char input;
    scanf(" %c", &input);
    //getchar();

    if(input == '$'){
        return 0;
    }
    
    if(s == input){
        return 1 + TotalNumOfChar(s);
    }

    return TotalNumOfChar(s);
}

int main(){

    char sign = 'a';

    scanf("%c", &sign);


    int total = TotalNumOfChar(sign);

    printf("%d\n", total);

    return 0;
}