#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const string ClientFileName = "Clients.txt";
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
    cout << "Enter Account Number ?";
    getline(cin>> ws, Client.AccountNum);
    cout << "Enter Pincode ?";
    getline(cin, Client.PinCode);
    cout << "Enter Name ? ";
    getline(cin, Client.Name);
    cout << "Enter Phone ? ";
    getline(cin, Client.Phone);
    cout << "Enter Account Balance ? ";
    cin>>Client.AccountBalance;
    return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator="#//#")
{
    string stClientRecord = "";
    stClientRecord += Client.AccountNum + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}
void SaveLineOfDataToFile(string FileName ,string stClientRecord)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios :: app);
    if (MyFile.is_open())
    {
        MyFile << stClientRecord<<endl;
    }
    MyFile.close();
}
void AddNewClient()
{
    sClient Client;
    Client = ReadNewClient();
    SaveLineOfDataToFile(ClientFileName, ConvertRecordToLine(Client));
}
void AddClient()
{
    char Choice = 'Y';
    do
    {
    system("cls");
    cout << "Adding New Client : " << endl<<endl;
    AddNewClient();
    cout << "Client Add Successfully , Do You Want To Add More Client ? ";
    cin >> Choice;
} while (toupper(Choice) == 'Y');
}
int main()
{ 
    AddClient();
     
    return 0;
}
