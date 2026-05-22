#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string ReadString()
{
	string Text;
	cout << "Please Enter Your String : " << endl;
	getline(cin, Text);
	return Text;
}
int CountCapitalLettersInString(string Text)
{
	int Counter = 0;
	for (int i = 0; i < Text.length(); i++)
	{
		if (isupper(Text[i]))
			Counter ++ ;
	}
	return Counter;
}
int CountSmallLettersInString(string Text)
{
	int Counter = 0;
	for (int i = 0; i < Text.length(); i++)
	{
		if (islower(Text[i]))
			Counter++;
	}
	return Counter;
}
int main()
{
	string S1;
	S1 = ReadString();
	cout << "String Length : " << S1.length() << endl;
	cout << "Capital Letters Count : " << CountCapitalLettersInString(S1)<< endl;
	cout << "Small Letters Count : " << CountSmallLettersInString(S1) << endl;

	return 0;
}