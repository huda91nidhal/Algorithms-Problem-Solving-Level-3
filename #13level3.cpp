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

bool IsMatrixIdentity(int arr[3][3], short Row, short Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if ((i == j) && (arr[i][j] != 1))
            {
                return false;
            }
            else if ((i != j) && (arr[i][j] != 0))
            {
                return false;
            }

        }
    }
    return true;
}
int main()
{
    //int arr1[3][3] = {{ 1,0,1 }, { 4, 5,6 }, { 7, 8, 9 }};
   int arr1[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr1, 3, 3);
    if (IsMatrixIdentity(arr1, 3, 3))
        cout << "\Yes , Matrix is Identity";
    else
        cout << "\nNo , Matrix is Not Identity";
    system("pause>0");
}