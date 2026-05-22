#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string ReadString()
{
    string Text;
    cout << "Please Enter Your String : " << endl;
    getline(cin,Text);
    return Text;
}
void PrintFirstLetterOfEachString(string Text)
{
    bool FirstLetter = true;
    for (short i = 0 ; i < Text.length() ; i++)
    {
        if (Text[i] != ' ' &&  FirstLetter )
        {
            cout << Text[i] << endl;
        }
        FirstLetter = (Text[i] == ' ' ? true : false);
    }
}
int main()
{
    string Text;
    PrintFirstLetterOfEachString(ReadString());
    system("pause>0");
}