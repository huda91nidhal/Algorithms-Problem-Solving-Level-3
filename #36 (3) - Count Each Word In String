#include <iostream>
#include <string>
#include<cctype>
using namespace std;
string ReadString()
{
    string Text;
    cout << "Please enter your string : " << endl;
    getline(cin, Text);
    return Text;
}
short CountEachWordInString(string S1)
{
    string delim = " ";
    short pos = 0 , count = 0 ;
    string sWord;
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            count++;
        }
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        count++;
    }
    return count;
}
int main()
{
    cout<<endl<<"The Number of words in your string is : "<<CountEachWordInString(ReadString())<<endl;
}

