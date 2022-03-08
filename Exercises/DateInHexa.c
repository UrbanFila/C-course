#include <stdio.h>

int main(){

    int year, month, day;

    printf("What is the year?\n");
    scanf("%d", &year);

    printf("What is the month?\n");
    scanf("%d", &month);

    printf("What is the day?\n");
    scanf("%d", &day);

    printf("Date in hexa decimal Day: 0x%X Month: 0x%X Year: 0x%X\n", day, month, year);

    return 0;
}