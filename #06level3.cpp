#include <iostream>
#include <iomanip>
using namespace std;
void FillMatrixWithOrderdNumbers(int arr[3][3], short Row, short Col)
{
    short Counter = 0;
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Col; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }
}
void PrintMatrix(int arr[3][3] , short Row , short Col)
{
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Col; j++)
        {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;

    }
}
int main()
{
    int arr[3][3];
    FillMatrixWithOrderdNumbers(arr, 3, 3);
    cout << "The following is a 3 X 3 ordered matrix : " << endl;
    PrintMatrix(arr,3,3);
    return 0;
}

