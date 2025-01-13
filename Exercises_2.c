/********** [Calculate the product of two floating-point numbers] **********/

#include <stdio.h>
int main(){

    float a;
    float b;

    printf("enter the value of a :");
    scanf("\n %f",&a);
    printf("enter the value of b :");
    scanf("\n %f",&b);

    printf("the product of %f and %f is %f * %f = %f",a,b,a,b,a*b);

    return 0;
}