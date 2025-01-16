/********** [the largest and smallest of four user-input numbers] **********/
#include <stdio.h>
int main(){

    int a,b,c,d;
    printf("enter the numbers below\n ");

    printf("a =");
    scanf("%d",&a);

    printf("b =");
    scanf("%d",&b);

    printf("c =");
    scanf("%d",&c);

    printf("d =");
    scanf("%d",&d);



    if(a==b&&b==c&&c==d) {                  //check all number same
        printf("all are same");
    }
    else{
        int largest,smallest;

        if(a>b&&a>c&&a>d) {                          //Check a is largest
          largest = a;
        }
        else if(b>c&&b>d) {                          //check b is largest
          largest = b;
        }    
        else if(c>d) {                              //check c is largest
           largest = c;
        }
        else {
           largest = d;
        }

        if(a<b&&a<c&&a<d) {                          //Check a is smallest
          smallest = a;
        }
        else if(b<c&&b<d) {                               //check b is smallest
          smallest = b;
        }    
        else if(c<d) {                                   //check c is smallest
          smallest = c;
        }
        else {
           smallest = d;
        }

        printf("the smallest number is : %d\n",smallest);
        printf("the largest number is : %d\n",largest);

    }
    return 0;
}


