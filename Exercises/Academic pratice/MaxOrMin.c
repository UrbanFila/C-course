#include <stdio.h> 

int main(){

    float num1;
    float num2;
    
     scanf("%f %f", &num1, &num2);

     if(num1 > num2){

        printf("%f is MAX\n", num1);
        printf("%f is MIN\n", num2);
    }
     else if(num1 < num2){

        printf("%f  is MAX \n", num2);
        printf("%f is MIN\n", num1);
     }
     else if(num2 > num1){
         
        printf("%f is MIN\n", num1);
        printf("%f  is MAX \n", num2);
     }
     else if(num2 < num1){
         printf("%f is MAX\n", num1);
         printf("%f is MIN\n", num2);
    }
}