/********** "function in the program to return 1 if number is prime otherwise return 0" **********/
#include <stdio.h>

int prime(int n);

int main(){
    int n;

    printf("enter a number : ");
    scanf("%d",&n);

    if (prime(n)){
        printf("%d is prime number!",n);
    }
    else{
        printf("%d is not prime number!",n);
    }

    return 0;
}


int prime(int n){

    int i, P = 1;

    if (n <= 1) {
        P = 0;
    }
    else if (n > 1){
        for (i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) {
                P = 0; 
                break;
            }
        }
    }

    if(P){
        return 1;
    }
    else{
        return 0;
    }

}