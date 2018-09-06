#include<iostream>

using namespace std;
void possiblesubsets(char a[],int N)
{
    int i,j;
    for(i=0;i< (1<<N);++i)      
    {
	for(j=0;j<N;++j)
	    if(i & (1<<j))
	       cout <<a[j] << ' '; 
	cout<<endl;
    }
}
int main()
{
  char a[]={'1','2','3','4'};
  possiblesubsets(a,4);
  return 0;
}