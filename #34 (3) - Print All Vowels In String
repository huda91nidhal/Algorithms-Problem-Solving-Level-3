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
bool VowelChar(char Ch1)
{
    Ch1 = tolower(Ch1);
    return (Ch1=='a' || Ch1 == 'e' || Ch1 == 'o' || Ch1 == 'i' || Ch1 == 'u');
}
void PrintVowelChar(string Text)
{
    cout << "Vowels in string are : ";
    for (short i = 0; i < Text.length(); i++)
    {
        if (VowelChar(Text[i]))
        {
            cout << Text[i] << "   ";
       }
    }
    cout << endl;
}
int main()
{
    string S1 = ReadString();
    PrintVowelChar(S1);
    return 0;
}
