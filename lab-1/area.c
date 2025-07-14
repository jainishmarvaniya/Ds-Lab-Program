#include <stdio.h>
#define PI 3.14
void main(){
  int radius;
  float area;

  printf("Enter a radius: ");
  scanf("%d",&radius);

  area=PI*radius*radius;

  printf("area of circle %f:",area);
}
