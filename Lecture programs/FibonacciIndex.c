#include <stdio.h>

int IndexValue(int ind){
    
    if(ind == 0){
        return 0;
    }

    if(ind == 1){
        return 1;
    }

    return IndexValue(ind - 1) + IndexValue(ind - 2);
}

int main(){

    int index = 0;

    scanf("%d", &index);

    int rez = IndexValue(index);

    printf("Value is %d\n", rez);
    return 0;
}