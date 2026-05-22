#include <iostream>
#include <cctype>
#include <vector>
using namespace std;
vector <string> SplitString(string S1, string delim)
{
    vector <string>vString;
    short pos;
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
string JoinString(vector <string> vString, string delim)
{
    string S1;
    for (string& s : vString)
    {
        S1 = S1 + s + delim;
    }
    return S1.substr(0, S1.length() - delim.length());
}
string LowerAllString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }
    return S1;
}
string ReplaceWordInStringWithCustomFunction(string S1, string Country1, string Country2 , bool MatchCase = true)
{
    vector <string> vString = SplitString(S1, " ");
    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == Country1)
            {
                s = Country2 ;
            }
        }
        else
            if (LowerAllString(s) == LowerAllString(Country1))
            {
                s = Country2;
            }
    }
    return JoinString(vString, " ");
}
int main()
{
    string S1 = "Welcome To Iraq , Iraq Is A Nice Country";
    cout << "Orginal String : " << endl << S1 << endl<<endl;

    cout << endl << "Replace With Match Case : " << endl <<
    ReplaceWordInStringWithCustomFunction(S1, "iraq", "usa") << endl;

    cout <<endl<<"Replace With No Match Case : " << endl <<
    ReplaceWordInStringWithCustomFunction(S1, "iraq", "Usa",false) << endl;
    return 0;
}

