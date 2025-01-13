//function to calcualte square of a numbers

#include <stdio.h>

int square(int n);    //function prototype

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int sqr = square(n);  //function call
    printf("square of %d is %d",n,sqr);

    return 0;
}

int square(int n){    //function defination
    return n*n;
}
