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
bool AreMatricesTypical(int arr1[3][3], int arr2[3][3], short Row, short Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            return false;
        }

    }
    return true;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\n matrix 1 :\n";
    PrintMatrix(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\n matrix 2 :\n";
    PrintMatrix(arr2, 3, 3);
    if (AreMatricesTypical(arr1, arr2, 3, 3))
        cout << "\nYes , Matrices Are Typical";
    else
        cout << "\nNo , Matrices Are Not Typical";
    system("pause>0");
}