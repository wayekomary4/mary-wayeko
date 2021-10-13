/*area and volume of a sphere*/
#include <stdio.h>
int main()
{
  int radius;//radius is an integer
  float area, volume, pi;//area, volume and pi are real numbers
  pi=3.142;//initialize 3.142 to pi
  printf("/nenter the radius");//promt for the radius
  scanf("/n%d", &radius);//inputs the radius

  area=4*pi*radius*radius;//the formula of area of a sphere
  volume=1.333*pi*radius*radius*radius;//the formula for volume of a sphere
  printf("/narea=%f", area);//generates the area 
  printf("volume=%f", volume);//generates the volume
  return 0;


}