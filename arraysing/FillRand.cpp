#include"Functions.h"
void FillRand(int arr[][5], const int m, const int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < n;j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(int arr[], const int n)//рандом
{
	for (int i = 0;i < n;i++)
	{
		arr[i] = rand() % 100;
	}
}
