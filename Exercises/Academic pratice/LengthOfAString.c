#include <stdio.h>

int Length (char *s){

    int i = 0;
    int counter = 0;

    while(s[i] != '\0'){
        counter++;
        i++;
    }

    return counter;
}

int main(){

    char str[] = "DonaldDuck";

    int a = Length(str);

    printf("%d\n", a);
    return 0;
}