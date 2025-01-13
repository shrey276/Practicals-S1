/********** [ Print ASCII Values of All Characters "A"to"Z" and "a"to"z" ] **********/

#include <stdio.h>
int main() {
    
    char x;

    printf("\nASCII of \"a\" to \"z\":\n\n");
    for(x = 'a'; x <= 'z'; ++x){
        printf("%c = %d\n",x,(int)x);
    }

    
    printf("\n\nASCII of \"A\" to \"Z\":\n\n");
    for(x = 'A'; x <= 'Z'; ++x){
        printf("%c = %d\n",x,(int)x);
    }



    return 0;
}