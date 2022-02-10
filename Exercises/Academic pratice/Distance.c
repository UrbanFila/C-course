#include <stdio.h>

int main(){

    int distance;

    printf("What is the distance?\n");
    scanf("%d", &distance);
    
    int speed;
    
    printf("What is the speed?\n");
    scanf("%d", &speed);

    int hours = distance / speed;

    float speedinMinutes = speed/60.0;
    float minutes = (distance % speed) / speedinMinutes;

    printf("The time is: %d hours and %.2f minutes\n", hours, minutes);

    return 0;
}