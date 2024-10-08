/********** ["Program to print following patterns:"] **********/

#include <stdio.h>

int main()
{   
    int i,j, n = 5;


    for (i = 1; i <= n; i++)             // pattern (a) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("\n===================================\n\n");
     for (i = 1; i <= n; i++)             // pattern (b) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }


    printf("\n===================================\n\n");
     for (i = 1; i <= n; i++)             // pattern (c) 
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }


    printf("\n===================================\n\n");
     for (i = 1; i <= n; i++)             // pattern (d) 
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d",(n+1)-i);
        }
        printf("\n");
    }

return 0;
}