#include<stdio.h>

int isPowerOfTwo(int x)
{
    return (x && !(x &(x-1)));
}
int main()
{
  printf("\n value : %d",isPowerOfTwo(0));
  
  printf("\n value : %d\n",( 32 && !(0)));
  return 0;
}