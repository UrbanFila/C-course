#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "noon";

    int l = strlen(str);

    //printf("%d\n",l);

    char str1[l];
    int j = 0;

    for(int i = l; i > 0; i--){

        if(str[j]== '\0'){

        }
        else{
            str1[i] = str[j];
        }
        j++;
    }

    int p = 1;

    for(int i = 0; i < l; i++){
        
        if(str[i] != str1[i + 1]){
            p = 0;
            break;
        }        
    }

    if( p == 0){
        printf("It is not a palindrome\n");
    }
    else{
        printf("It is a palindrome\n");
    }
    
    return 0;
}