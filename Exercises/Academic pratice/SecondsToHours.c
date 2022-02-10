#include <stdio.h>

int main(){


    int seconds;

    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int lefovermin = hours * 3600;
    
    lefovermin = seconds - lefovermin;

    int minutes = lefovermin / 60;
    int lefoverseconds = lefovermin % 60;

    printf("0%d : 0%d : %d\n", hours, minutes, lefoverseconds);

    return 0;
}