#include<stdio.h>

void showbits(char n)
{
    char k,andmask;
    int i;    
    for(i=15;i>=0;i--)
    {
      andmask = 1 << i;
      k = n & andmask;
	(k==0)?printf("0"):printf("1");
    }
    printf("\n");
}
int isBitSet(char num,int bitvalue)
{
  return (num&(1 << bitvalue));
}
int main()
{    
   char c=0x1D;
   showbits(~c);    
   if(isBitSet(~c,3))
     printf("True\n");
   else
     printf("False\n");
    
    return 0;
}