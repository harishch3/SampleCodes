#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<map>

using namespace std;

string split(const string& s, char delimiter)
{
    string formatString;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        string subToken = token.substr(0,token.find('='));
        formatString.append(subToken);
        formatString.append(",");
    }
    formatString.erase(formatString.end()-1);
    return formatString;
}

string formatData(string str)
{
    string vec = split(str,'|');
    return vec;
}
int main()
{
    //1.Read the file line by line & store it in the STL container(vector).
    ifstream inFile("feed_sample.txt");
    vector<string> inFileData,processedData;
    string tempString;

    while(getline(inFile,tempString))
    {
        inFileData.push_back(tempString);
    }

    //2.Process the data from source vector & save the data in the destination vector.
    for(int i=0; i<inFileData.size(); i++)
    {
        string test = formatData(inFileData[i]);
        processedData.push_back(test);
    }

    //3.Initialize the map<string, int> iterate the destination vector & save the information in key-value pair in the map where the key would be pattern & value would be number of times pattern appeared in the file.
    map<string, int> counterMap;
    for (auto & elem : processedData)
    {
        auto result = countMap.insert(pair<string, int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }
    //4.Print the output by iterating the values on the map. (uses an auto[c++11] keyword to find the type of a variable at the time of initialization)
    for (auto & elem : countMap)
    {
        cout << "["<<elem.first << "]" << elem.second << endl;
    }

    return 0;
}
