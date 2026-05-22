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
char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}
string InvertLettersInString(string Text)
{
	
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = InvertLetterCase(Text[i]);
		
    }
	return Text;
}
int main()
{
	string S1 = ReadString();
	S1 = InvertLettersInString(S1);
	cout<<"Strings After Inverting All Letters Case : "<<endl<<S1<<endl;
}