#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string ReadString()
{
	string Text;
	cout << "Please Enter Your String : " << endl;
	getline(cin, Text);
	return Text;
}
void PrintEachWordInString(string S1)
{
	string delim = " ";
	cout << "Your Word in string : " << endl << endl;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		cout << S1 << endl;
	}
}


int main()
{
	PrintEachWordInString(ReadString());
	return 0;
}