/********** [Find the area of circle] **********/

#include <stdio.h>

int main()
{
    float r,pi;
    pi = 3.14;

    printf("enter the redius of circle : ");
    scanf("%f",&r);

    printf("area of the circle is %f x %f^2 = %f",pi,r,pi*r*r);


return 0;
}