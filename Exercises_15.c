/********** [takes a floating-point number and an integer as input, Multiply them and display the result as a float] **********/
#include <stdio.h>
int main(){

    int a;
    float b;
    
    float result;

    printf("enter the integer value of a :");
    scanf("%d",&a);
    printf("enter the float vale of b :");
    scanf("%f",&b);
    
    result = (float)a/b;
    printf("float value of a/b is : %f\n",result);

    return 0;
}