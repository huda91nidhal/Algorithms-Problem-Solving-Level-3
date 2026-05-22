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
bool IsNumbersInMatrix(int arr[3][3],int Number, short Row, short Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (arr[i][j] == Number)
            {
                return true;
            }
        }
    }
    return false;
}

void PrintNumbersInMatrix(int arr1[3][3], int arr2[3][3], short Row, short Col)
{
    int Number = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Number = arr1[i][j];
            if (IsNumbersInMatrix(arr2, Number, Row, Col))
            cout << setw(3) << Number << " ";
        } 
    }
}
int main()
{
    int Matrix1[3][3] = { {77,8,12},{22,20,1},{1,0,9} };
    int Matrix2[3][3] = { {15,22,77},{80,67,12},{1,20,7} };
   
    cout <<endl<<"matrix 1 :\n";
    PrintMatrix(Matrix1, 3, 3);
    
    cout <<endl<<"matrix 2 :\n";
    PrintMatrix(Matrix2, 3, 3);

    cout <<endl<<"InterSected Numbers are :\n";
    PrintNumbersInMatrix(Matrix1, Matrix2, 3, 3);
 
    system("pause>0");
}