#include <stdio.h>


int main(){

    //char str[] = "Hello! My name is Vlad";
    char str[] = "Number of words";
    int i = 0;
    int counter = 0;

    while(str[i] != '\0'){

        if(str[i] == ' '){
            counter++;
        }
        
        i++;

        if(str[i] == '\0'){
            counter++;
        }

    }

    printf("%d\n",counter);

    return 0;
}