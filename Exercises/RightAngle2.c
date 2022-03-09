#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int counter = 1;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= counter; j++){

            printf("%d", counter); 

        }
        printf("\n");
        counter++;

        if(counter > n){
            break;
        }
    }




    return 0;
}