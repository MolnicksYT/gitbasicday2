#include"Functions.h"
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