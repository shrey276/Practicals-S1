/********** "Program to store the roll number of 5 students using an array." **********/

#include <stdio.h>
int main()
{
    int i,r[5];

    char s1[9]="Jay",s2[9]="Om",s3[9]="Ram",s4[9]="jass",s5[9]="zeel";
    char *s[] = {s1,s2,s3,s4,s5};

    for(i = 0; i < 5; i++){
        printf("Enter the %s's roll no: ",s[i]);
        scanf("%d",&r[i]);
    }
    
return 0;
}