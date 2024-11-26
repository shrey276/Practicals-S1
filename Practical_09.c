/********** ["Program to print following patterns:"] **********/

#include <stdio.h>

int main()
{   
    int i,j,n;
    printf("enter a number of colms : ");
    scanf("%d",&n);


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
     for (i = n; i >= 1; i--)             // pattern (c) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }


    printf("\n===================================\n\n");
     for (i = n; i >= 1; i--)             // pattern (d) 
    {
        for (j = 1;j <= i ;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

return 0;
}