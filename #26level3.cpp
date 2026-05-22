
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;
string ReadString()
{
    string Text;
    cout << "Please Enter Your String : " << endl;
    getline(cin, Text);
    return Text;
}
string PrintUpperLetterOfString(string Text)
{
    for (short i = 0; i < Text.length(); i++)
    {
        Text[i] = toupper(Text[i]);
    }
    return Text;
}
string PrintLowerLetterOfString(string Text)
{
    bool FirstLetter = true;
    for (short i = 0; i < Text.length(); i++)
    {
        Text[i] = tolower(Text[i]);
    }
    return Text;
}
int main()
{
    string Text;
    Text = ReadString();
    Text = PrintUpperLetterOfString(Text);
    cout << endl << "Text After Upper : " << endl << Text << endl;
    Text = PrintLowerLetterOfString(Text);
    cout << endl << "Text After Lower : " << endl << Text << endl;
    system("pause>0");
}