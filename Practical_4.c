/********** ["Program of swapping two values"] **********/

#include <stdio.h>
int main()
{

    int a,b,x;

    printf("\nenter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);

    //print values before swapping
    printf("*** values before swapping ***");
    printf("\na = %d \nb = %d\n",a,b);

    x = a;
    a = b;
    b = x;

    //print values after swapping
    printf("*** values after swapping ***");
    printf("\na = %d \nb = %d\n\n",a,b);

return 0;    
}

