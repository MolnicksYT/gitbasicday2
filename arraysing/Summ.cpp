#include"Functions.h"
int Summ(int arr[], const int n)
{
	int Summ = 0;
	for (int i = 0;i < n;i++)
	{
		Summ += arr[i];
	}
	return Summ;
}