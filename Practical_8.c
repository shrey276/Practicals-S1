/********** ["program to print the Fibonacci series."] **********/
#include <stdio.h>

int main() 
{
    int n,i;

    printf("enter the terms of fibonacci series : ");
    scanf("%d",&n);

    int f[n];
    f[0] = 0;
    f[1] = 1;

//count fibonacci after 2 numbers
    if(n > 2)
    {    
        for(i = 2; i < n; i++ )
        {
            f[i] =  f[i - 2] + f[i - 1];
        }
    }

//print fibonacci
    printf ("Fibonacci series of %d numbers : ",n);
    for (i = 0; i < n; i++)
    {
        printf("%d",f[i]);
        if(i<n-1){         
            printf(",");
        }    
    }


return 0;
}