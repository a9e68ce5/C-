// Heap.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int n = 12;
int d[12] ={-1, 8, 26, 5, 77, 1, 61, 11, 60, 15, 49, 19};
void Heapfiy(int r)
{
	int j,e;
	e = d[r];
	for (j = 2 * r; j <= n; j *= 2)
	{
		if (j < n&&d[j] < d[j + 1])j++;
		if (e > d[j])break;
		d[j / 2] = d[j];
	}
	d[j / 2] = e;
}
int main(void)
{
	for (int i = n / 2; i >= 1; i--)
	{
		Heapfiy(i);
	}
	for (int i = 1; i < n; i++)
	{
		cout << d[i] << endl;
	}
	system("pause");
    return 0;
}
