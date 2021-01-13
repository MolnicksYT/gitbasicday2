#include"Functions.h"
void Print(int arr[], const int n)//вывод	
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[][5], const int m, const int n)//вывод
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}