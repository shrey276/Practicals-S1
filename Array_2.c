/********** ["Program to print marks obtained by students"] **********/

#include<stdio.h>
int main(){
    
 //take input for number of students in class
    int n;
    printf("enter the number of students : ");
    scanf("%d",&n);

 //take marks 
    int i,a[n];
    for(i = 0; i < n; i++){

        printf("Enter the marks of roll no %d : ",i+1);
        scanf("%d",&a[i]);
    }

 //print marks 
    int j;
    for(j = 0; j < n; j++){

        printf("\n marks of roll no %d : %d ",j+1,a[j]);
    }

return 0;
}