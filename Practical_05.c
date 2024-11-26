/********** ["Program to convert time from given seconds to total hours, minutes and seconds"] **********/

#include <stdio.h>
int main(){

    int s,sec,min,hor;

    printf("enter time in seconds : ");
    scanf("%d",&s);

    hor = s/3600;
    min = (s%3600)/60;
    sec = s%60;

    printf("%d hour; %d min; %d sec",hor,min,sec);

return 0;    

}