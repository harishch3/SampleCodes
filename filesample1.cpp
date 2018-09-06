#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main()
{
    string data;
    int nooflines;
    /*fstream src("08082018_2304402_65_ALL_20180807T2347.txt");
    //fstream dest("/test_Data.txt");
    fstream dest;
    dest.open("test_data.txt",ios::out|ios::trunc);
    
    nooflines=0;
    while(getline(src,data))
    {
	nooflines++;
	dest << data;
	dest <<endl;
    }
    src.close();
    dest.close();*/
    
    ifstream src("08082018_2304402_65_ALL_20180807T2347.txt")a;
    fstream dest;
    dest.open("test_data.txt",ios::out|ios::trunc);
    data = src.get();
    
    dest << data;
    cout<<"\n data"<<data<<endl;
    
    
    return 0;
}