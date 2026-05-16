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
void MultiplyMatrix(int arr1[3][3], int arr2[3][3], int arr3[3][3], short Rows, int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3], arr3[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\n matrix 2 :\n";
    PrintMatrix(arr2, 3, 3);
    MultiplyMatrix(arr1, arr2, arr3, 3, 3);
    cout << "\n matrix 3 :\n";
    PrintMatrix(arr3, 3, 3);
    system("pause>0");
}