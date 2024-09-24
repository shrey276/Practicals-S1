/********** ["Program to display 3 students' student name, roll number and marks of 4subjects and also display the total marks and percentage of each student"] **********/

// INCOMPLATE !!!!

#include <stdio.h>
int main(){

    char s1[20],s2[20],s3[20];
    char *s[] = {s1,s2,s3};
    int i;

    printf("\n\n====================================================================================== \n\n");
    for(i = 0; i <= 2; i++)
    {
        printf ("enter student%d name : ",i+1);
        scanf ("%s",s[i]);

    }
    
    
    int j,r[3];

    printf("\n\n====================================================================================== \n\n");
    for(i = 0; i <= 2; i++)
    {
        printf ("enter %s's roll no : ",s[i]);
        scanf ("%d",&r[i]);
    
    }


    int LDP[3],PEP[3],AEM[3],CEP[3];
    int *sub[] = {LDP,PEP,AEM,CEP};
    char *subname[] = {"LDP","PEP","AEM","CEP"};

    printf("\n\n====================================================================================== \n\n");
    for(i = 0; i <= 2; i++)
    {
        printf("-*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *- \n");

        for(j = 0; j <= 3; j++)
        {
            printf ("enter %s marks of roll no %d : ",subname[j],r[i]);
            scanf ("%d",&sub[j][i]);
        } 
    }

    printf("\n\n ========= *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=* ======== \n\n");

// INCOMPLATE !!!!

}