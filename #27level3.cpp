
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
char ReadString()
{
    char Letter;
    cout << "Please Enter A Character : " << endl;
    cin>>Letter;
    return Letter;
}
char CharacterInverseCase(char Char1)
{
    return isupper(Char1) ? tolower(Char1) : toupper(Char1);
}
int main()
{
    char Letter;
    Letter = ReadString();
    cout << "Char After Inversing Case is : " << endl << CharacterInverseCase(Letter);
    system("pause>0");
}