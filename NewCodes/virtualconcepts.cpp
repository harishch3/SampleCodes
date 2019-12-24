#include<iostream>

using namespace std;

class Base{
public:
int a;
virtual void display(){}
void display1(){ cout<<"\ndisplay1"<<endl;}
};
class Derived:public Base
{
public:
void display()
{
//display1();
cout<<"derived display"<<endl;
}
};
int main()
{
//Base *b = new Base();
//Base b1;
Derived d;
//b1.display();
//b->display();
d.display1();

Base *b2 = new Derived();
b2->display();
return 0;
}
