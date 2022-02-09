#include <stdio.h>

int main(){

    printf("We have %d coins in the bank\n", 100);
    //prints out We have 100 coins in the bank;

    printf("We have %f coins in the bank\n", 125.7);
    //prints out We have 125.700000 coins in the bank;

    printf("Year = %d\n", 2020);
    //prints out Year = 2020

    printf("Your average grade is: %f \n", 95.13);
    //prints out  Your average grade is 95.1300000

    printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
    //prints out num1= 5, num2 = 7, sum = 12

    printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
    //prints out  num1 = 5.200000, num2 = 7.300000, sum = 9.500000

    printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
    //prints out num1 = 5, num2 = 3, sub = 2

    printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
    //prints out a = 3, b = 5, sum = a + b = 8

    printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    //prints out a = 3, b = 5, sum = 3 + 5 = 8;

    printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    //prints out  a = 3, b = 5, sum = a + b = 3 + 5 = 8;

    return 0;
}
