/********** ["Program to deletion duplicate elements of array"] **********/

#include<stdio.h>
int main(){

     int x;
    printf("Enter no of elements : ");                                                                                                                                                                                                             
    scanf("%d",&x);

    int arr[x],i,j,k,n;

    for(i = 0; i < x; i++){
        printf("enter the element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < x; i++)
    {
        for(j = i+1; j < x; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < x; k++)
                {
                    arr[k] = arr[k+1];
                }
                x--;
                j--;
            }
        }    
    }

    printf("the elements in array after deletion : ");
    for(n = 0; n < x; n++)
    {
        printf("%d",arr[n]);
        if(n < x-1)
        printf(", ");
    }

return 0;
}