/********* [Input and Display ASCII Value] **********/
#include <stdio.h>
int main() {

    char character;
    printf("enter single character:");
    scanf("%c",&character);

    printf("ASCII value of %c is :%d",character,(int)character);


    return 0;
}
