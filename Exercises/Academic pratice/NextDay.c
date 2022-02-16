#include <stdio.h>

int main(){

    int day, month, year, leapyear;

    scanf("%d %d %d %d", &day, &month, &year, &leapyear);


    switch (month){
        case 1:
        
            if(day == 31){
                day = 1;
                month = 2;

                printf("%d %d %d\n", day, month, year);
            }
            else{
                day += 1;

                printf("%d %d %d\n", day, month, year);
            }

        break;

        case 2:

            if(leapyear == 1){

                if(day == 29){
                    day = 1;
                    month++;
                    printf("%d %d %d\n", day, month, year);
                }
                else{

                    day++;
                    printf("%d %d %d\n", day, month, year);
                }
            }
            else{

                if(day == 28){
                    day = 1;
                    month++;
                    printf("%d %d %d\n", day, month, year);
                }
                else{
                    day++;
                    printf("%d %d %d\n", day, month, year);
                }
            }

            break;
        
        case 3:

            if(day == 31){
                
                day = 1;
                month = 4;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;

        case 4:

           if(day == 30){
                
                day = 1;
                month = 5;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;
        case 5:

            if(day == 31){
                
                day = 1;
                month = 6;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }
        
            break;
        case 6:
        
           if(day == 30){
                
                day = 1;
                month = 7;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;

        case 7:
           if(day == 31){
                
                day = 1;
                month = 8;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;

        case 8:

           if(day == 31){   
                day = 1;
                month = 9;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;

        case 9:

            if(day == 30){
                
                day = 1;
                month = 10;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;
        
        case 10:

           if(day == 31){
            
                day = 1;
                month = 11;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;
        
        case 11:

           if(day == 30){
                
                day = 1;
                month = 12;
                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }

            break;
        case 12:

           if(day == 31){
                
                day = 1;
                month = 1;
                year++;

                printf("%d %d %d\n", day, month, year);
            }
            else{
                day++;
                printf("%d %d %d\n", day, month, year);
            }
            break;
         default:
            break;
    }
    return 0;
}