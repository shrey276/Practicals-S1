/********** ["To check whether the given number is prime or not"] **********/
#include <stdio.h>

int main() 
{
    int n, i, P = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n <= 1) 
    {
        P = 0;
    }
    else if (n > 1)
    {
        for (i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) 
            {
                P = 0; 
                break;
            }
        }
    }

    if(P)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
