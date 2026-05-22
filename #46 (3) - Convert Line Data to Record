#include <iostream>
#include <vector>
#include <cctype>
#include<string>
using namespace std;
struct sClient
{
	string AccountNum;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0 , pos + delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}
sClient ConvertClientToRecord(string Line , string Seperator="#//#")
{
	sClient Client;
	vector <string> vClientData;
	vClientData = SplitString(Line, "#//#");
	Client.AccountNum = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
	return Client;
}
void PrintRecord(sClient Client)
{
	cout << "The Following is the extracted client record : " << endl;
	cout<<"Account Number : "<<Client.AccountNum<<endl;
	cout << "Pincode : " << Client.PinCode << endl;
	cout << "Name : " << Client.Name << endl;
	cout << "Phone : " << Client.Phone << endl;
	cout << "Account Balance : " << Client.AccountBalance << endl;
}
int main()
{
	string LineRecord="A150#//#1234#//#Huda Nidhal Alden#//#07760505685#//#5000.00000";
	cout << "Line Record is : " << endl << LineRecord << endl << endl;

	sClient Client = ConvertClientToRecord(LineRecord);

	PrintRecord(Client);
	return 0;
}

