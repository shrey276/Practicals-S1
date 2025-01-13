/********** [convert second to hours,minutes and second] **********/

#include <stdio.h>
int main(){

    int mints,hor,sec,s;
   
    printf("enter seconds :"); 
    scanf("%d",&s);
    
    hor = s / 3600;                                  //convert seconds to hours
    mints = (s % 3600) / 60;                       //how many minutes are left 
    sec = s % 60;                                  //how many seconds are left
   
    printf("%d hours , %d minutes and %d seconds",hor,mints,sec);

    return 0;

}