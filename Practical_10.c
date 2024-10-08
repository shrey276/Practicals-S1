/********** ["Program to store the roll number of 5 students using an array."] **********/

#include <stdio.h>
int main()
{
    int i,r[5];

    for(i = 1; i <= 5; i++)
    {
        printf("Enter the roll no of student%d : ",i);
        scanf("%d",&r[i-1]);
    }
    
return 0;
}