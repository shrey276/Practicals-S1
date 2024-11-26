#include <stdio.h>
int main(){

    char s1[15],s2[15],s3[15];
    char *s[] = {s1,s2,s3};
    int i,j,r[3];
    for(i = 0; i <= 2; i++)
    {
        printf ("enter student%d name : ",i+1);
        scanf ("%s",s[i]);
        printf ("enter %s's roll no : ",s[i]);
        scanf ("%d",&r[i]);
    }

    int LDP[3],PEP[3],AEM[3],CEP[3];
    int *sub[] = {LDP,PEP,AEM,CEP};
    char *subname[] = {"LDP","PEP","AEM","CEP"};

    printf("\n\"Enter the marks out of 30\"\n");
    for(i = 0; i <= 2; i++){
        printf("\n");
        for(j = 0; j <= 3; j++){
            printf ("enter %s marks of roll no %d : ",subname[j],r[i]);
            scanf ("%d",&sub[j][i]);
        } 
    }

    int sm[3] ;
    int percentage[3] ;
    for(i = 0; i <= 2; i++){
        sm[i] =  (LDP[i] + PEP[i] + AEM[i] + CEP[i]) ;
        percentage[i] = ((sm[i]*100)/120); 
    }
    
    printf ("\n\n| Roll no. |      Name:      | LDP | PEP | AEM | CEP | TOTAL | Per%% |\n");
    printf ("|----------|-----------------|-----|-----|-----|-----|-------|------|\n");
    for(i = 0; i <= 2; i++){ 
        printf ("| %-7d. | %-15s | %-3d | %-3d | %-3d | %-3d | %-5d | %-4d%%|\n",r[i],s[i],LDP[i],PEP[i],AEM[i],CEP[i],sm[i],percentage[i]);  
    }
}