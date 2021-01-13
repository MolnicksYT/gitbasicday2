#include<iostream>
using namespace std;
void FillRand(int arr[], const int n);
void FillRand(int arr[][5], const int m, const int n);
void Print(int arr[], const int n);
void Print(int arr[][5], const int m, const int n);
void Sort(int arr[], const int n);
void Sort(int arr[], const int m, const int n);
int Summ(int arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

#define delimiter "------------------------------------------------------------------------------\n"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элем. массива: " << Summ(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << delimiter << endl;
	//заполнение массива случ числами
	int brr[n];
	FillRand(brr, n);
	Print(brr, n);
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter;
	const int m = 111;
	int crr[m];
	FillRand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	const int ROWS = 8;
	const int COLS = 5;
	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << delimiter;
	Print(i_arr2, ROWS, COLS);
	}
	void FillRand(int arr[], const int n)//рандом
	{for (int i = 0;i < n;i++)
	{
		arr[i] = rand() % 100;
	}
}
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
	void Print(int arr[], const int n)//вывод	
	{
	for (int i = 0;i < n;i++)
		{
			cout << arr[i] << "\t";
		}
	cout << endl;
	}
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
	void Print(int arr[][5], const int m, const int n)//вывод
	{
		for (int i = 0;i < m;i++)
		{
			for (int j = 0;j < n;j++)
			{
				cout << arr[i] << "\t";
			}
		}
		cout << endl;
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