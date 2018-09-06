#include<stdio.h>

int main()
{
    int x=10,count;
    while(x)
    {
	x = x & (x-1);
	count++;
    }
    printf("\n %d",count);
    return 0;
}