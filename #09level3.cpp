#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
    Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}
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
void PrintMiddleRow(int arr[3][3], int Row , int Col)
{
    short MiddleRow = Row / 2;
    for(int j = 0; j < Col; j++)
    {        printf(" %0*d ", 2, arr[MiddleRow][j]);
    }
}
void PrintMiddleCol(int arr[3][3],  int Row , int Col)
{
    short MiddleCol = Col / 2;
    for(int i = 0; i < Row; i++)
    {
        printf(" %0*d ", 2, arr[i][MiddleCol]);
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr, 3, 3);
    cout << "\n Middle Row of Matrix 1 is : " << endl;
    PrintMiddleRow(arr, 3, 3);
    cout << "\n Middle Col of Matrix 1 is : " << endl;
    PrintMiddleCol(arr,3, 3);
    system("pause>0");
}