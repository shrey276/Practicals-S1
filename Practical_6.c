/********** ["Program to display 3 students' student name, roll number and marks of 4subjects and also display the total marks and percentage of each student"] **********/


#include <stdio.h>
int main(){

    char s1[15],s2[15],s3[15];
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

    printf("\n\n====================================================================================== \n");
    printf("\"Enter the marks out of 30\"");
    printf("\n====================================================================================== \n");
    for(i = 0; i <= 2; i++)
    {
        printf("\n-*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *- \n");

        for(j = 0; j <= 3; j++)
        {
            printf ("enter %s marks of roll no %d : ",subname[j],r[i]);
            scanf ("%d",&sub[j][i]);
        } 
    }

    printf("\n\n\n ========= *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=* ======== \n\n");

// RESULT 
   
    int LDPm[3],PEPm[3],AEMm[3],CEPm[3];
    int *subm[] = {LDPm,PEPm,AEMm,CEPm};
    int sm[3] ;

    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            subm[j][i] = (sub[j][i] * 100)/30;
        }
        sm[i] =  (LDPm[i] + PEPm[i] + AEMm[i] + CEPm[i]) / 4 ; 
    }

// PRINT RESULT

    printf ("|------------------------------------------------------------------------|\n");
    printf ("|| Roll no. |      Name:      |  LDP%% |  PEP%% |  AEM%% |  CEP%% |  FINAL%% ||\n");
    printf ("||----------|-----------------|-------|-------|-------|-------|---------||\n");

    for(i = 0; i <= 2; i++)
    { 
        printf ("|| %-7d. | %-15s | %-5d | %-5d | %-5d | %-5d | %-7d ||\n",&r[i],s[i],LDPm[i],PEPm[i],AEMm[i],CEPm[i],sm[i]);  
    }

    printf ("|------------------------------------------------------------------------|\n");



}