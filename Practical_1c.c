/********** [Find the factorial of the given number] **********/
#include <stdio.h>
int main()
{

int a =4;
int i,f = 1;

    for(i = 1; i <= a; i++){
        f = i*f;
    }

    printf("the factorial of %d is %d ",a,f);

return 0;

}

