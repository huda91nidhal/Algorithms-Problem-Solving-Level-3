#include <iostream>
#include <string>
using namespace std;
struct sClient
{
    string AccountNum;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
sClient ReadNewClient()
{
    sClient Client;
    cout << "Enter Account Number ? ";
    getline(cin, Client.AccountNum);
    cout << "Enter Pincode ? ";
    getline(cin , Client.PinCode);
    cout << "Enter Name ? ";
    getline(cin , Client.Name);
    cout << "Enter Phone ? ";
    getline(cin , Client.Phone);
    cout << "Enter Account Balance ? ";
    cin >> Client.AccountBalance;
    return Client;
}
string ConvertRecordToLine(sClient Client , string Seperator = "#//#")
{
    string stClientRecord = "";
    stClientRecord += Client.AccountNum + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

int main()
{
    sClient Client;

    cout << "Please Enter Client Data : " << endl;
    Client = ReadNewClient();

    cout << endl << endl << "Client Record For Saving Is : " <<
    endl<<ConvertRecordToLine(Client)<<endl;
    
    return 0;
}

