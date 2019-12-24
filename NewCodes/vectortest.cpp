#include<iostream>
#include<vector>

using namespace std;

int main()
{
vector<int> vec;
for(int i=0;i<1073741823;i++)
{
vec.push_back(10);
}
cout<<"max_size:"<<vec.max_size()<<endl;
cout<<"Size:"<<vec.size()<<endl;
}
