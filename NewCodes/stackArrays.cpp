#include <iostream>
#define MAX 10
using namespace std;

class mystack
{
public:
int top;
int arr[MAX];

mystack()
{
top = -1;
}
bool push(int ele);
int pop();
int peek();
bool isEmpty();

};

bool mystack::push(int ele)
{
if(top >= MAX-1)
{
return false;
}
else{
arr[++top] = ele;
}
}

int mystack::pop()
{
if(top <0)
{
return 0;
}
else{
int x = arr[top--];
return x;
}
}

int mystack::peek()
{
if(top <0)
{
return 0;
}
else{
int x = arr[top];
return x;
}
}

bool mystack::isEmpty()
{
    if(top < 0)
    {
    return true;
    }
    else{
    return false;
    }
}


