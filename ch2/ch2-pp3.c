#include <stdio.h>

#define PI_NUM 3.141592653f


int main(void)
{
  float radius, volume;

  printf("Insert the radius of the sphere: ");
  scanf("%f", &radius);

  volume = 4.0f / 3.0f * PI_NUM * radius * radius *radius;

  printf("The volume of the sphere is: %.2f\n", volume);

  return 0;
}
