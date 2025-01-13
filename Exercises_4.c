/********** [To calculate the sum of digits of a given number] **********/
#include <stdio.h>
int main(){ 

    int number,sum = 0;

    printf("enter the number :");
    scanf("%d",&number);

    for(;number != 0; number /= 10){

        sum += number % 10;

    }
    printf("the sum of the digits is %d",sum);

}