#include <iostream>
#include <string>
using namespace std;
string TrimToLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
    }
	return " ";
}
string TrimToRight(string S1)
{
	for (short i = S1.length(); i > 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
    }
	return " ";
}
string Trim(string S1)
{
	return (TrimToLeft(TrimToRight(S1)));
}
int main()
{
	string S1 ="   Huda Alshammari   ";
	cout << "Trim To Left  = " << TrimToLeft(S1) << endl;
	cout << "Trim To Right = " << TrimToRight(S1) << endl;
	cout << "Trim          = " << Trim(S1) << endl;
	return 0;
}