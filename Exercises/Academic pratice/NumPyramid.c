#include <stdio.h>

int main(){

    printf("Insert number of rows: \n");

    int row = 0;

    scanf("%d", &row);

    int num = 1;
    int counter = 1;
    int space = row - 1;

    for(int i = 0; i < row; i++){

        for(int k = 0; k < space; k++){
            printf(" ");
        }

        for(int j = 0; j < counter; j++){
            printf("%d ", num);
            num++;
        }

        counter++;
        space--;
        printf("\n");
    }



    return 0;
}