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
int CountNumberInMatrix(int arr[3][3], int Num , short Row, short Col)
{
    short Counter = 0;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (arr[i][j] == Num)
            {
                Counter++;
            }
        }
    }
    return Counter;
}
bool IsMatrixSparce(int arr[3][3], short Row, short Col)
{
    short MatrixSize = Row * Col;
    return (CountNumberInMatrix(arr, 0, Row, Col) >= (MatrixSize / 2));
}
int main()
{
    int arr1[3][3] = { {1,0,0}, {0,5,9}, {9,9,1} };
    int Num;
    //int arr1[3][3] = {5,0,0,0,5,0,0,0,5};
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr1, 3, 3);
    if (IsMatrixSparce(arr1, 3, 3))
        cout << "Yes , Matrix is Sparce" << endl;
    else
        cout << "No , Matrix is Not Sparce" << endl;
    system("pause>0");
}