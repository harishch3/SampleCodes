#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int searchkey)
{
     if(r >= l)
     {
        int mid = 1+ (r-l)/2;

        if(a[mid] == searchkey)
        {
          return mid;
        }
        if(a[mid] > searchkey)
        {
            binarySearch(a,l,mid-1,searchkey);
        }
        return binarySearch(a,mid+1,r,searchkey);
     }
     return -1;
}
int main()
{
int a[] = {1,2,3,4,5,6,7,8,9};
int n = sizeof(a)/sizeof(a[0]);
int result = binarySearch(a,0,n-1,56);
//cout<<"Found at position:"<<return1<<endl;
(result == -1)?cout<<"Element is not present in array"
              :cout<<"Element is present at index " <<result;
return 0;
}

