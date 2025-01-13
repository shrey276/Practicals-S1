/*********** [ converts temperatures between Celsius, Fahrenheit, and Kelvin ] ***********/

#include <stdio.h>
int main(){
    
    float temp;
    char unit;

    printf("enter the temperature (xC,xF,xK):");
    scanf("%f%c",&temp,&unit);

    switch (unit)
    {
    case 'C':
        printf("%f Celsius = %f Fahrenheit\n",temp,((temp * 9)/5) + 32);
        printf("%f Celsius = %f Kelvin\n",temp,temp + 273.15);
        break;
    case 'F':
        printf("%f Fahrenheit = %f Celsius\n",temp,((temp - 32)*5)/9);
        printf("%f Fahrenheit = %f Kelvin\n",temp,(((temp - 32)*5)/9) + 237.15);
        break;
    case 'K':
        printf("%f Kelvin = %f Celsius\n",temp,temp - 273.15);
        printf("%f Kelvin = %f Fahrenheit\n",temp,(((temp - 237.15)*9)/5)+32);
        break;    
    }

    return 0;

}