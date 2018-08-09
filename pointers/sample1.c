#include<stdio.h>

int main()
{
  int i=3,*j,**k;
  
  j=&i;
  k=&j;
  
  printf("\n %d",(*j+2));
  printf("\n %u\n ",j);
}