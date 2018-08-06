#include<stdio.h>

int main()
{
  int num,i,count;
  num = 29;
  i=2;
  while(i<=num-1)
  {
    if(num%i == 0)
    {
      break;
    }
    i++;
  }
  if(i==num)
  {
    printf("Prime\n");
  }
  
  return 0;
}