/* 
 * Calculating the Circumference and Area
 * of a circle
 *
*/
#include <stdio.h>
#define PI 3.1459

float circle_circum(float radius)
{
// Circumference formula - 2 * PI * radius
return (2 * PI * radius);
}

float circle_area(float radius)
{
// Area formula - PI * radius * radius
return (PI * radius * radius);
}

int main (void)
{
  float radius;

  puts("\n\033[4mCalculation of the Circumference and Area of a Circle\033[0m");

  printf("\nEnter a value for the radius(cm) of the circle you wish to calculate:\n");
  scanf("%20f", &radius);

  printf("\nThe Circumference of the circle is %.2f cm\n",circle_circum(radius)); 
  printf("The Area of the circle is %.2f cm2\n", circle_area(radius));
  puts("");

  return (0);
}
