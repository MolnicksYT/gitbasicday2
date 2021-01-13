#include"Functions.h"


void Sort(int arr[], const int n) //сортировка
{
	for (int i = 0;i < n;i++) //выбирает элемент, в который нужно поместить мин. значение
	{
		for (int j = i + 1;j < n;j++)//перебирает элементы, в поисках мин.значения
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
const int ROWS = 8;
const int COLS = 7;
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			for (int k = 0;k < m;k++)
			{
				for (int l = 0;l < n;l++)
				{
					//если перебираемый элемент < чем выбранный элемент
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

int Summ(int arr[], const int n)
{
	int Summ = 0;
	for (int i = 0;i < n;i++)
	{
		Summ += arr[i];
	}
	return Summ;
}
double Avg(int arr[], const int n)
{
	double Avg = Summ(arr, n) / n;
	return Avg;
}