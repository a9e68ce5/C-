// QuickSort.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int d[12] = { 9,7,8,5,6,89,46,34,78,90,32,9999 };
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void QuickSort(int a[], int l, int u)
{
	int i = l;
	int j = u + 1;
	int PK = a[l];
	if (l < u)
	{
		do {

			do {
				i++;
			} while (PK > a[i]);
			do {
				j--;
			} while (PK < a[j]);
			if (i < j)
			{
				swap(&a[i], &a[j]);
			}
		} while (i < j);
		swap(&a[l], &a[j]);
		QuickSort(a, l, j - 1);
		QuickSort(a, j + 1, u);
	}
}
int main(void)
{
	QuickSort(d, 0, 10);
	for (int i = 0; i < 11; i++)
	{

		cout << d[i] << endl;
	}
	system("pause");
	return 0;
}



