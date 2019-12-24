#include<iostream>
using namespace std;

int linearSearch(int* a,int count,int searchkey)
{
    for(int i=0;i<count;i++)
    {
        if(a[i] == searchkey)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
int a[] = {1,58,98,74,65,56,45,65,36};
int n = sizeof(a)/sizeof(a[0]);
int result = linearSearch(a,n,75);
//cout<<"Found at position:"<<return1<<endl;
(result == -1)?cout<<"Element is not present in array"
              :cout<<"Element is present at index " <<result;
return 0;
}
