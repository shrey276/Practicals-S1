/********** "Program in addition to a 2X2 dimensional array." **********/

#include <stdio.h>

int main(){

    int i,j;

    int a[2][2],b[2][2],c[2][2];

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("enter a %d %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        } 
    }

    printf("\n\n");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("enter b %d %d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        } 
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
        c[i][j] = a[i][j] + b[i][j]; 
        } 
    }

    printf("\n\n %d  %d  +  %d  %d  =  %d  %d \n",a[0][0],a[0][1],b[0][0],b[0][1],c[0][0],c[0][1]);
    printf(" %d  %d     %d  %d     %d  %d \n",a[1][0],a[1][1],b[1][0],b[1][1],c[1][0],c[1][1]);

    return 0;

}

