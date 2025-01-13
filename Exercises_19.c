/*Largest number from four numbers*/
#include <stdio.h>
int main(){
    float a,b,c,d;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f",&b);
    printf("enter the value of c:");
    scanf("%f",&c);
    printf("enter the value of d:");
    scanf("%f",&d);

    if (a>b && a>c && a>d){
        printf("%f is the largest number.",a);
    }

    else if (b>c && b>d){
        printf("%f is the largest number.",b);
    }

    else if (c>d){
        printf("%f is the largest number.",c);
    }

    else 
        printf("%f is the largest number.",d);
      
    


    return 0;
}