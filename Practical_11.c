//Program in addition to a 2X2 dimensional array.

#include <stdio.h>

int main(){

    int i,j;

    int a[2][2] = {{2,3},{4,5}};
    int b[2][2] = {{3,4},{2,2}};

    int c[2][2]; 

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
        c[i][j] = a[i][j] + b[i][j]; 
        } 
    }

    printf("2  3  +  3  4  =  %d  %d \n",c[0][0],c[0][1]);
    printf("4  5     2  2     %d  %d \n",c[1][0],c[1][1]);

    return 0;

}

