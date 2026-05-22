#include <iostream>
using namespace std;
char ReadChar()
{
    char Char1;
    cout << "Please Enter A Character :" << endl;
    cin >> Char1;
    return Char1;
}
bool CheckVowelCharacter(char Ch1)
{
    Ch1 = tolower(Ch1);
    return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u');
}
int main()
{
    char Ch1 = ReadChar();
    if (CheckVowelCharacter(Ch1))
    
        cout <<endl<< "Yes Letter '" << Ch1 << "' is Vowel " << endl;
    else
        cout <<endl<< "No Letter '" << Ch1 << "' is not Vowel " << endl;
    return 0;
}
