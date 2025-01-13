#include <stdio.h>
int main()
{
    
    //peramiter and Area of rectangle and square

    int l,b;
    char what1;

    printf("What do you want to find ?\n"); 
    printf("A. Peramiter of rectangle \n");
    printf("B. Peramiter of square \n");
    printf("C. Area of rectangle \n");
    printf("D. Area of square \n");
    printf("write any one option:");
    scanf("%c",&what1);

    switch (what1)
    {
    case 'A':

      printf("enter the lenth of rectangle :");
      scanf("%d",&l);
      printf("enter the breath of rectangle :");
      scanf("%d",&b);
      printf("the perameter of rectangle is : %d",2*(l+b));

      break;

    case 'C':

      printf("enter the lenth of rectangle :");
      scanf("%d",&l);
      printf("enter the breath of rectangle :");
      scanf("%d",&b);
      printf("the area of rectangle is : %d",(l*b));
  
      break;

    case 'B':

      printf("enter the lenth of square :");
      scanf("%d",&l);
      printf("the perameter of square is : %d",4*l);

      break;
    
     case 'D':

      printf("enter the lenth of square :");
      scanf("%d",&l);
      printf("the AREA of square is : %d",l*l);

      break;

    
    default:

      printf("not valid option!");

      break;
    }
    


  return 0;
}