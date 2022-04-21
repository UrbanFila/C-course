#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 4
//{1,2,3,3,2,1};
//{1,3,2,3,1}
//{1,4,6,2}

int main(){

    int array[SIZE] = {1,4,6,2};
    int flag = 0;
    for(int i = 0; i < SIZE/2; i++){  

            if(array[i] == array[SIZE - 1 - i]){     
            }
            else{
                flag = 1;
                break;
            }
    }

    if(flag == 1){
        printf("Not a palindrome\n");
    }
    else{
        printf("It is a palindrome\n");
    }

    return 0;
}