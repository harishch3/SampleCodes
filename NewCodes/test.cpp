#include<iostream>
#include<ostream>

using namespace std;
class ostreamOVer
{
public:
int a,b;
ostreamOVer(int a,int b):a(b),b(a)
{}
public:
friend ostream& operator << (ostreamOVer &osver,ostream& cout1);
};

ostream& operator <<(ostream& cout1,ostreamOVer &osver)
{
return cout1<<osver.a<<" "<<osver.b;
}
int main()
{
ostreamOVer osv(10,20);
cout<<osv;
}
