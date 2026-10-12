//Write a C program to compute the perimeter and area of a circle with a given radius.


#include <stdio.h>

int main()
{
float radius, circumference, area;

printf("Enter lenght of radius in cm: ");
scanf("%f", &radius );

circumference = 2*3.14*radius;
area = 3.14*(radius*radius);

printf("Circumference of circle is = %.2f", circumference);
printf("\nArea of circle is = %.2f", area);

return 0 ;

}