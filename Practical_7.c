/********** ["To check whether the given number is prime or not"] **********/
#include <stdio.h>

int main() {
    int num, i, P = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num <= 1) {
        P = 0;
    }
    else if (num > 1)
    {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                P = 0; 
                break;
            }
        }
    }

    if(P)
    {
        printf("%d is a prime number.\n", num);
    }

    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
