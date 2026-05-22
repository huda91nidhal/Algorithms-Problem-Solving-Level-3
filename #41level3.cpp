#include<iostream>
#include <vector>
#include<string>
using namespace std;
string ReadString()
{
	string Text;
	cout << "Please Enter Your String : " << endl;
	getline(cin, Text);
	return Text;
}
vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}
string ReverseString(string S1)
{
	vector <string> vString;
	string S2 = "";
	vString = SplitString(S1, " ");
	vector <string>::iterator iter = vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S2 = S2 + *iter + " ";
	}
	return S2.substr(0, S2.length() - 1);
}
int main()
{
	string S1 = ReadString();
	cout << "Your String After Reverse Words : " << endl;
	cout<<ReverseString(S1)<< endl;
	return 0;
}