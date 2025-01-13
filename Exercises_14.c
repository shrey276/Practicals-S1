/********** [takes two integers from the user, divides them, and prints the result as both an integer and a float] **********/
#include <stdio.h>
int main(){

    int a,b;
    int int_result;
    float float_result;

    printf("enter the integer value of a :");
    scanf("%d",&a);
    printf("enter the integer vale of b :");
    scanf("%d",&b);
    
    int_result = a/b;
    printf("integer value of a/b is : %d\n",int_result);

    float_result = (float)a/b;
    printf("float value of a/b is : %f\n",float_result);

    return 0;
}
