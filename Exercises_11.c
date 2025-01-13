#include <stdio.h>

#define PI 3.14159

int main() {
    float length, width, radius, base, height, side1, side2, side3;
    float area_rectangle, perimeter_rectangle;
    float area_square, perimeter_square;
    float area_circle, circumference_circle;
    float area_triangle, perimeter_triangle;
    char choice;

    printf("what do you want to find ?\n");
    printf("A. Area of the rectangle\n");
    printf("B. Perimeter of the rectangle\n");
    printf("C. Area of the square\n");
    printf("D. Perimeter of the square\n");
    printf("E. Area of the circle\n");
    printf("F. Circumference of the circle\n");
    printf("G. Area of the triangle\n");
    printf("H. Perimeter of the triangle\n");

    printf("write any one option :");
    scanf("%c",&choice);

    switch (choice)
    {
    case 'A':

        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);
        area_rectangle = length * width;
        printf("Area of the rectangle is: %f", area_rectangle);
     break;

    case 'B':

        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);
        perimeter_rectangle = 2 * (length + width);
        printf("Perimeter of the rectangle is: %f", perimeter_rectangle);
     break;

    case 'C':

        printf("Enter the length of the square: ");
        scanf("%f", &length);
        area_square = length * length;
        printf("Area of the square is: %f", area_square);
     break; 

    case 'D':

        printf("Enter the length of the square: ");
        scanf("%f", &length);
        perimeter_square = length * 4;
        printf("perimeter of the square is: %f",perimeter_square);
     break;

    case 'E':

        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area_circle = PI * radius * radius;
        printf("Area of the circle is: %f", area_circle);
     break; 

    case 'F':

        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        circumference_circle = 2 * PI * radius;
        printf("Circumference of the circle is: %f", circumference_circle);
     break;

    case 'G':

        printf("Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("Enter the height of the triangle: ");
        scanf("%f", &height);
        area_triangle = 0.5 * base * height;
        printf("Area of the triangle is: %f", area_triangle);
     break;

    case 'H':

        printf("Enter the first side of the triangle: ");
        scanf("%f", &side1);
        printf("Enter the second side of the triangle: ");
        scanf("%f", &side2);
        printf("Enter the third side of the triangle: ");
        scanf("%f", &side3);
        perimeter_triangle = side1 + side2 + side3;
        printf("Perimeter of the triangle is: %f", perimeter_triangle);
     break; 

    default:

        printf("invallid choice!");
        break;
    }

    return 0;
}
