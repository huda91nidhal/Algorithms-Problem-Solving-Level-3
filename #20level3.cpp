#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}
int CheckMatrixPalindrome(int arr[3][3], short Row, short Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col / 2 ; j++)
        {
            if (arr[i][j] != arr[i][Col-1-j])
            {
                return false;
            }

        }
    }
    return true;
}
int main()
{
    int Matrix[3][3] = { {8,2,8},{5,5,5},{9,3,9} };

    cout << endl << "matrix 1 :\n";
    PrintMatrix(Matrix, 3, 3);

    if (CheckMatrixPalindrome(Matrix, 3, 3))
        cout << "Yes , Matrix is Palindrome" << endl;
    else 
        cout << "No , Matrix is Not Palindrome" << endl;

    system("pause>0");
}