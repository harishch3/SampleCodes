#include<stdio.h>

void possiblesubsets(char a[],int N)
{
    for(i=0;i< (1<<N);++i)      
    {
	for(j=0;j<N;++j)
	    if(i & (1<<j))
	       cout <<A[j] << ' '; 
	cout<<endl;
    }
}
int main()
{
  char a[]={1,2,3};
  possiblesubsets(a,3);
  return 0;
}