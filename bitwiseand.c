#include<stdio.h>

void showbits(unsigned char n)
{
  int i;
  unsigned char k,j,andmask;
  for(i=7;i>=0;i--)
  {
      j=i;
      andmask = 1 << j;
      k = n & andmask;
      (k==0)?printf("0"):printf("1");
  }
}
int main()
{
  unsigned char num =0xAD,j;
  printf("\n Value of num: \n");
  showbits(num);
  
  j=num & 0x20;
  printf("\n");
  showbits(0x20);
  if(j==0)
    printf("\n Its Fifth bit is off");
  else
    printf("\n Its fifth bit is on");
  
  printf("\n");
  showbits(num);
  j= num & 0x08;
  printf("\n");
  showbits(0x08);
  if(j==0)
    printf("\n Its third bit is off");
  else  
  {
    printf("\n Its third bit is on");
    
    num = num & 0xF7;
    printf("\n New value of num =");
    showbits(num);
    
    j = num & 0x08;
    
    if(j==0)
      printf("\n Now the third bit turned off");
  }
  return 0;
}
