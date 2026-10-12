//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.


#include <stdio.h>

int main()
{
int height = 7;
int width = 5;
int perimeter, area;

area = height*width;
perimeter = 2*(height+width);

printf("Area = %d Square inches", area);
printf("\nPerimeter = %d inches", perimeter);

return 0;
}