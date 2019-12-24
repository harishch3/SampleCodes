#include<iostream>
#include<string.h>
using namespace std;

void reverseofString(char *str)
{
int i,l;
char *begin,*end,c;
l = strlen(str);
begin= str;
end =str;
for(i=0;i<l-1;i++)
 *end++;
for(i=0;i<l/2;i++)
{
 c = *end;
*end = *begin;
*begin = c;
*begin++;
*end--;
}
}
int main()
{
char name[]="computer system architecture";
cout<<name<<endl;
reverseofString(name);
cout<<name<<endl;
}
