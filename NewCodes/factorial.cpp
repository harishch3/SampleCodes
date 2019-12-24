#include<iostream>
using namespace std;

int main()
{
int fact=1,i=1,n;
cin >> n;
for(i=1;i<=n;i++)
{
fact = fact * i;
if(i == n)
 cout<<i<<"=";
else
 cout<<i<<"*";
}
std::cout<<fact<<endl;
}
