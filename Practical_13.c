//program that defines a function to add first n numbers
#include <stdio.h>

int addn(int n);

int main(){

    int n;
    
    printf("enter n : ");
    scanf("%d",&n);
    printf ("the sum of first %d numbers is --> %d",n,addn(n));

    return 0;
}

int addn(int n){

    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }

    return sum;

}