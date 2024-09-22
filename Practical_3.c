/********** [Program to calculate Addition, Subtraction, Multiplication and Division of given two numbers using arithmetic operator] **********/

#include <stdio.h>
int main()
{ 
    int a,b;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d x %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);

return 0;
}


