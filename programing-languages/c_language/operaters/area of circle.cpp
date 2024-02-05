#include <stdio.h>

int main()
{
  float radius, area;
//Enter the radius of circle 
  printf("Enter the radius of a circle :");

  scanf("%f", &radius);
  
// formula for area of circle
  area = 3.14*radius*radius;

  printf("Area of the circle = %.2f", area);  // printing upto two decimal places

  return 0;
}
