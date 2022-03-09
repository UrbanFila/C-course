#include <stdio.h>

int main(){

    int t = 1;
    int grade;
    int sum = 0;
    int counter = 0;

    while(t == 1){

        scanf("%d", &grade);

        if(grade == -1){
            break;
        }

        sum += grade;
        counter++;
    }

    double agrade = sum / counter;


    printf("Avarage grade is %.2lf\n", agrade);

    return 0;
}