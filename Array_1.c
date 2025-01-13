/**********["Program to print five number using array"]**********/

#include<stdio.h>
int main(){

    int i,a[5] = {34,37,28,41,18};
     
    for(i = 0; i < 5; i++){

        printf("%d",a[i]);

        if(i < 4)
        printf(",");
    }

return 0;
}