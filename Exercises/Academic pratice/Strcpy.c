#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "Hello World!";

    int l = strlen(str);

    char str1[l];

    int i = 0;
    
    while(str[i] != '\n'){
        
        str1[i] = str[i];

        i++;
    }

    printf("%s\n", str1);

    return 0;
}