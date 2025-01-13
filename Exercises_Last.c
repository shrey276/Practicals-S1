// Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include<stdio.h>
#include<string.h>

int main()
{


   char  mystring[]="bbqlb!ip!hbzb!ibjo!bbk!lb!qipof0!mbqupq!cboei!lbslf!tp!kbp!bvs!sftvmu!bbof!lb!xbju!lbsp!!!";

    for(int i=0 ; i<strlen(mystring); i++)
     {
        mystring[i]=mystring[i]-1;
        
     }

     printf("\n\n***{%s}***\n\n", mystring);

     return 0 ; 
 
}