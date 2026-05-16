#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	int randomnum = rand() % (To - From + 1) + From;
	return randomnum;
}
void FillMatrix3By3WithRandomNumber(int arr[3][3] , int row , int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}

	}
}
void PrintMatrex(int arr[3][3] , int row , int col)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<setw(3)<< arr[i][j] << "  ";
		}
		cout << endl;

	}
}
int main()
{
	int arr[3][3];
	srand((unsigned)time(NULL));
	FillMatrix3By3WithRandomNumber(arr,3,3);
	cout << "The Random Number of Matrex [3][3] is : " << endl;
	PrintMatrex(arr, 3, 3);
	return 0;
}

