#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string ReadString()
{
	string Text;
	cout << "Please Enter A String : " << endl;
	getline(cin, Text);
	return Text;
}
bool IsVowelChar(char Ch )
{
	Ch = tolower(Ch);
	return (Ch == 'a' || Ch == 'o' || Ch == 'e' || Ch == 'i' || Ch == 'u');
}
short CountVowelChar(string Text)
{
	short Count = 0;
	for (short i = 0; i < Text.length(); i++)
	{
		if (IsVowelChar(Text[i]));
		Count++;
	}
	return Count;
}
int main()
{
	string S1 = ReadString();
	cout << "Number Of Vowel is : " << CountVowelChar(S1)<<endl;
	return 0;
}

