#include <iostream>
#include <vector>
using namespace std;
string ReplaceWordInStringWithBuildInFunction(string S1 , string Country1 , string Country2)
{
    short pos = S1.find(Country1);
    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, Country1.length(), Country2);
        pos = S1.find(Country1);
    }
    return S1;
}
int main()
{
    string S1 = "Welcome To Iraq , Iraq Is A Nice Country";
    cout << "Orginal Text : " << endl<< S1 << endl;
    cout <<endl<<"String After Replace : " <<endl<<
    ReplaceWordInStringWithBuildInFunction(S1, "Iraq", "Usa")<<endl;
}

