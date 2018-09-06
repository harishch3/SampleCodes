#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>

using namespace std;

vector<string> split(string str, string c = "")
{
    vector<string> result;
    string token;
    size_t pos = 0;
    while((pos = str.find(c))!=string::npos)
    {
	token = str.substr(0,pos);
	result.push_back(token);
	str.erase(0,pos+1);
    }
    
    return result;
}
int main()
{
  vector<string> consumers,splitConsumers;
  string Data;
  fstream myfile("/tmp/test.txt"); // fstream or ifstream 
  while(std::getline(myfile,Data))
  {
      consumers.push_back(Data);
  }
  cout<<"\n Size : "<<consumers.size()<<endl;
  cout<<"\n Size : "<<consumers.at(0)<<endl;
  string s = consumers[0];
  splitConsumers = split(s,",");  
  if(splitConsumers.size()!=0)
    cout<<"s[0]"<<splitConsumers[0]<<splitConsumers[1]<<endl;
  return 0;
}

