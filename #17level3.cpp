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
bool CheckNumberInMatrix(int arr[3][3], int Num, short Row, short Col)
{
    short Counter = 0;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (arr[i][j] == Num)
            {
               return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
    int Num;
    //int arr1[3][3] = {5,0,0,0,5,0,0,0,5};
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr1, 3, 3);
    cout << "Please Enter the number to look for in matrix : " << endl;
    cin >> Num;
    if (CheckNumberInMatrix(arr1,Num , 3, 3))
        cout << "Yes , Its There" << endl;
    else
        cout << "No , Its Not There" << endl;
    system("pause>0");
}