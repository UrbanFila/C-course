#include <stdio.h>


int main(){


    int x, y;

    scanf("%d %d", &x, &y);

    

    if(x > 0 && y > 0){

        printf("First quadrant\n");

    }
    else if(x == 0 & y == 0){

        printf("Center\n");

    }
    else if(x < 0 && y > 0){

        printf("Second quadrant\n");

    }
    else if(x < 0 && y < 0){

        printf("Third quadrant\n");
    }
    else if(x > 0 && y < 0){

        printf("Forth quadrant\n");

    }
    
    
    return 0;
}