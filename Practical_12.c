//program to demonstrate different string functions

# include <stdio.h>
# include <string.h>

/*
   strlen()  %zu  String Length
   strcat()  Concatenate Strings
   strcpy()  Copy Strings
   strcmp()  Compare Strings
*/

int main(){

char a[] = "Apple";
char b[] = " Red";


//strlen()  %zu  String Length
printf("\nLength of a is : %zu",strlen(a));  

//strcat()  Concatenate Strings
printf("\n\na and b is : %s",strcat(a,b));

//strcpy()  Copy Strings
strcpy(a,b);
printf("\n\nNow string a is : %s",a);
strcpy(b,a);
printf("\nNow string b is : %s",b);

//strcmp()  Compare Strings
char x1[] = "hii";
char y1[] = "hello";
char x2[] = "anbu";
char y2[] = "anbu";
printf("\n\nCompare Strings x1 y1 --> %d",strcmp(x1,y1));
printf("\nCompare Strings x2 y2 --> %d",strcmp(x2,y2));

return 0;

}