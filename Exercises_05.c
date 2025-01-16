/********** [Check if a given number is even or odd and print an appropriate message] **********/
#include <stdio.h>
int main(){

    int n;
    printf("enter the number :");
    scanf("%d",&n);

    if(n%2 == 0) {
        printf("the number you given is even number\n");
    }
    else {
        printf("the number you given is odd number\n");
    }

    return 0;
}