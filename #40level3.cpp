#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
string JoinString(vector <string> vString, string delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + delim;
	}
	return S1.substr(0, S1.length() - delim.length());
}
string JoinString(string arrString[], short Length, string delim)
{
	string S1  ;
	for (short i = 0; i < Length; i++)
	{
		S1 =S1 + arrString[i] + delim;

    }
	return S1.substr(0, S1.length() - delim.length());
}
int main()
{
	vector <string> vString{ "Mohamed" , "Ahmed" , "Ali" , "Emad"};
	
	cout <<endl<< "Vector After Join : " << endl << JoinString(vString, " ")<<endl;
	
	string arrString[] = {"Mohamed" , "Ahmed" , "Ali" , "Emad"};
	
	cout <<endl<< "Array After Join : " << endl << JoinString(arrString, 4, " ") << endl;

	return 0;
}

