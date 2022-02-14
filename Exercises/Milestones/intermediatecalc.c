#include <stdio.h>

int main(){

    char sign;

    scanf("%c", &sign);

    float a, b;

    scanf("%f %f", &a, &b);

    float sum = 0;

    float dif =  0;

    float multi = 0;

    int ostanek = 0;

    float divison = 0;

    switch(sign){

        case '+':

            sum = a + b;

            printf("%f\n", sum);

            break;

        case '-':

            dif = a - b;
           
            printf("%f\n", dif);

            break;

        case '*':
            
            multi = a * b;

            printf("%f\n", multi);

            break;

        case '/':

            divison = a / b;

            printf("%f\n", divison);

            break;
        
        case '%':

            ostanek = ((int)a) % ((int) b);

            printf("%d\n", ostanek);

            break;

        default:

            break;

    }



    return 0;
}