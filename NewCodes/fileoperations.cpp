#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
string line;
ifstream in1("status"); 
while(in1)
{
getline(in1,line);
cout<<line<<endl;
}
in1.close();
ofstream fout("status",ios::app);
fout<<"Completed"<<endl;
return 0;
}
