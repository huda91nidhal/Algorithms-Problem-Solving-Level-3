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
int SumOfMatrix(int arr[3][3], int Row, int Col)
{
    int Sum = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Sum += arr[i][j];
        }
    }
    return Sum;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int Sum = 0;
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr, 3, 3);
    cout << "\n Sum of Matrix 1 is : "<<SumOfMatrix(arr, 3, 3);
    system("pause>0");
}