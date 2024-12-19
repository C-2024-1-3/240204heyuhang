#include<iostream>
using namespace std;

int main()
{
	double a[10] = { 103.13,16.13,13.13,16.4,44,1656.6,61.3,949,61.4,494 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (a[j] >= a[j + 1])
			{
				double n = a[j];
				a[j] = a[j + 1];
				a[j + 1] = n;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}