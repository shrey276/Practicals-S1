/********** [Qualified for electrocal id card or not(use loop for more than one user)] **********/

#include <stdio.h>
int main(){

    int age,user_age;
    int restart;
    

    while(user_age = 1){

        printf("enter your age in number:");
        scanf("%d",&age);

        if (age > 99)
            printf("you don't need to vote.\n\n");
        else if (age <= 18) 
            printf("you not eligible for electrocal id card.\n\n");
        else if (age > 18)
            printf("you eligible for electrocal id card.\n\n");
        else 
            printf("invalid input !\n\n");

        printf("Do you need to start again?\n");
        printf("Write '1' for yes and '0' for no :");
        scanf("%d",&restart);

        if (restart == 1)
            printf("\n\n\n***...***...***...***...***...\n");
        else if (restart == 0)

    break;           

    } 
           
    return 0;

}