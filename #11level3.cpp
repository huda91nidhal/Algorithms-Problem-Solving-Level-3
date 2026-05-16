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
bool AreMatricesEQual(int arr1[3][3] , int arr2[3][3] , short Row , short Col)
{
    return SumOfMatrix(arr1, Row , Col) == SumOfMatrix(arr2, Row, Col);
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3] , arr2[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\n matrix 2 :\n";
    PrintMatrix(arr2, 3, 3);
    if (AreMatricesEQual(arr1, arr2,3,3))
        cout << "\nYes , Matrices Are Equal";
    else
        cout << "\nNo , Matrices Are Not Equal";
    system("pause>0");
}