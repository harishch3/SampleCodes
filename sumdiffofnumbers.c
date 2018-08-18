#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ 
  int a,b;
  float x,y;
  scanf("%d\n",&a);
  scanf("%d\n",&b);
  scanf("%f\n",&x);
  scanf("%f",&y);
  printf("%d %d",(a+b),(a-b));
  printf("%0.1f %0.1f",(x+y),(x-y));
  return 0;
}