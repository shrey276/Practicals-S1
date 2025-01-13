#include <stdio.h>
int main()
{

    //Area of circle and volume of cylinder

    float r;
    float pi;
    pi = 3.14;
    printf("radius:");
    scanf("%f",&r,"\n");
    printf("Area of circle is:%f*%f*%f = %f",pi,r,r,pi*r*r);//Area of circle

    float h;
    printf("\nheight of cylinder:");
    scanf("%f",&h,"\n");
    printf("volume of cylinder is:%f*%f*%f*%f = %f",pi,r,r,h,pi*r*r*h);//Volume of cylinder

    return 0;
}