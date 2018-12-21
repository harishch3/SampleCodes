#include<stdio.h>
// Steps involved are , 
// a) Take the input number, 
// b) Left the 1 with each byte positions and make it as mask
// c) And the input number with mask and store the result
// d) Check and print the bit value

void showBits(int n)
{
	int maskValue,k,i;
	for(i=15;i>=0;i--)
	{
	    maskValue = 1 << i;
	    k = n & maskValue; 
	    (k == 0) ? printf("0"):printf("1");
	}
}
int main()
{
	char a = 0x20;
	showBits(a);
	printf("\n");
	return 0;
}
